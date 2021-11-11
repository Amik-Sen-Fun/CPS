clear;
clc;
cla;
clf;

C = [1 0 ; 0 1];

A = [0.66 0.53; -0.53 0.13]; 
B = [0.34; 0.53];
K = [0.0556 0.3306];
L = [0.36 0.27; -0.31 0.08];


time = 10;
x_axis =linspace(0,10);
plot_vectorx1 = zeros(1,time);
plot_vectorx2 = zeros(1,time);
plot_vectorxhat1 = zeros(1,time);
plot_vectorxhat2 = zeros(1,time);
plot_r = zeros(1,time);

% Change th from here also
plot_th = 0.1*ones(1,time);

x = [0.001356; 0];
xhat = [0;0];
y = C*x;
u = 0;
y_a = C*x;
xhat_a = [0;0];
u_a = 0;
x_a = [0.001356; 0];
a = [0.005028 -0.000112 -0.091526];
au = [a zeros(1, time-size(a,2))];

for i = 1:time
    u = -K*xhat;
    r = C*x-C*xhat;
    xhat = A*xhat+B*u+L*r;
    x = A*x+B*u;

    u_a = -K*xhat_a;
    u_a_a = u_a+ au(i);
    r_a = C*x_a - C*xhat_a;
    xhat_a = A*xhat_a+B*u_a+L*r_a;
    x_a = A*x_a+B*u_a_a;
    plot_vectorx1(i) = x_a(1);
    plot_vectorx2(i) = x_a(1);
    plot_vectorxhat1(i) = x(2);
    plot_vectorxhat2(i) = x_a(2);
    plot_r(i) = norm(r_a, Inf);

end
plot(plot_th);
hold on
plot(plot_r);
hold off
