function data = controller_lqr(data, y, ref)

A = data.A_d;
B = data.B_d;
C = data.C_d;
L = data.L;
K = data.K;
F = data.F;
% estimator
data.x_hat = A*data.x_hat+B*data.u+L*(y-C*data.x_hat);
% controller
data.u = - K*data.x_hat - F*ref;
%% your code to calculate control cost correponsing to every control input [hint: use x_hat in place of x since x is not available]
% data.J = 0;


