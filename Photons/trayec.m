
dudphi =@(phi,u)[u(2);0.5*u(1)^2-u(1)];
[phi,u] = ode23(dudphi,[pi/3 5*pi/3], [0.5,1]);

r=u(:,1).^-1;
y=r.*sin(phi);
x=r.*cos(phi);



plot(x,y,'-')
axis padded
hold on
plot(0,0,'.k','MarkerSize',150)
axis padded
hold off
