function H_full = H_leg(eta_i,in2,in3)
%H_LEG
%    H_FULL = H_LEG(ETA_I,IN2,IN3)

%    This function was generated by the Symbolic Math Toolbox version 8.4.
%    01-Apr-2020 11:27:58

alpha_1 = in2(3,:);
alpha_2 = in2(4,:);
beta_1 = in2(1,:);
beta_2 = in2(2,:);
q_1 = in3(1,:);
q_2 = in3(2,:);
q_3 = in3(3,:);
system_radius = in2(5,:);
t2 = cos(beta_1);
t3 = cos(beta_2);
t4 = cos(eta_i);
t5 = cos(q_1);
t6 = cos(q_2);
t7 = cos(q_3);
t8 = sin(beta_1);
t9 = sin(beta_2);
t10 = sin(eta_i);
t11 = sin(q_1);
t12 = sin(q_2);
t13 = sin(q_3);
t20 = alpha_1./2.0;
t21 = alpha_2./2.0;
t14 = t9.^2;
t15 = t6.*t7;
t16 = t5.*t10;
t17 = t6.*t13;
t18 = t7.*t12;
t19 = t12.*t13;
t22 = t4.*t5;
t23 = cos(t20);
t24 = cos(t21);
t25 = sin(t20);
t26 = sin(t21);
t28 = t2.*t4.*t11;
t29 = t2.*t10.*t11;
t27 = -t19;
t30 = t23.^2;
t31 = t24.^2;
t32 = t25.^2;
t33 = t26.^2;
t34 = -t29;
t45 = t16+t28;
t51 = t2.*t23.*t25.*2.0;
t52 = t4.*t8.*t23.*t25.*2.0;
t53 = t5.*t8.*t23.*t25.*2.0;
t54 = t4.*t11.*t23.*t25.*2.0;
t55 = t8.*t10.*t23.*t25.*2.0;
t56 = t10.*t11.*t23.*t25.*2.0;
t62 = t8.*t11.*t12.*t24.*t26.*2.0;
t35 = t5.*t30;
t36 = t6.*t31;
t37 = t11.*t30;
t38 = t5.*t32;
t39 = t12.*t31;
t40 = t6.*t33;
t41 = t11.*t32;
t42 = t12.*t33;
t43 = -t32;
t44 = -t33;
t50 = t22+t34;
t57 = -t53;
t58 = -t55;
t59 = -t56;
t60 = t22.*t51;
t61 = t16.*t51;
t79 = t12.*t24.*t26.*t45.*2.0;
t46 = -t38;
t47 = -t40;
t48 = -t41;
t49 = -t42;
t63 = t30+t43;
t64 = t31+t44;
t83 = t12.*t24.*t26.*t50.*2.0;
t65 = t2.*t63;
t66 = t4.*t8.*t63;
t67 = t35+t46;
t68 = t36+t47;
t69 = t8.*t10.*t63;
t70 = t37+t48;
t71 = t39+t49;
t72 = t7.*t68;
t73 = t8.*t67;
t74 = t13.*t68;
t75 = t4.*t70;
t76 = t7.*t71;
t77 = t10.*t70;
t78 = t13.*t71;
t81 = t2.*t4.*t67;
t82 = t2.*t10.*t67;
t92 = t57+t65;
t99 = t7.*t24.*t26.*(t53-t65).*-2.0;
t100 = t13.*t24.*t26.*(t53-t65).*-2.0;
t103 = t54+t61+t69;
t104 = -t64.*(t53-t65);
t105 = t59+t60+t66;
t80 = -t78;
t84 = -t81;
t85 = t18+t74;
t86 = t17+t76;
t87 = t27+t72;
t93 = t51+t73;
t106 = t58+t75+t82;
t108 = t7.*t24.*t26.*t103.*2.0;
t109 = t13.*t24.*t26.*t103.*2.0;
t111 = t7.*t24.*t26.*t105.*2.0;
t113 = t13.*t24.*t26.*t105.*2.0;
t115 = t64.*t103;
t116 = t64.*t105;
t88 = t15+t80;
t89 = t8.*t11.*t86;
t94 = t45.*t86;
t96 = t50.*t86;
t101 = t6.*t24.*t26.*t93.*2.0;
t107 = t52+t77+t84;
t110 = t85.*t93;
t112 = -t108;
t114 = -t93.*(t19-t72);
t117 = -t116;
t118 = t6.*t24.*t26.*t106.*2.0;
t120 = t85.*t106;
t122 = -t106.*(t19-t72);
t90 = t8.*t11.*t88;
t91 = -t89;
t95 = t45.*t88;
t97 = t50.*t88;
t102 = -t101;
t119 = t6.*t24.*t26.*t107.*2.0;
t121 = t85.*t107;
t123 = -t120;
t124 = -t107.*(t19-t72);
t128 = t83+t115+t118;
t131 = t96+t112+t122;
t98 = -t95;
t125 = t62+t102+t104;
t126 = t90+t100+t110;
t127 = t91+t99+t114;
t129 = t79+t117+t119;
t130 = t94+t111+t124;
t133 = t97+t109+t123;
t132 = t98+t113+t121;
H_full = reshape([t4.*t133+t3.*t10.*(-t96+t108+t106.*(t19-t72))+t9.*t10.*t128,t4.*t132+t3.*t10.*t130-t9.*t10.*t129,-t4.*t126+t9.*t10.*(-t62+t101+t64.*(t53-t65))+t3.*t10.*(t89+t93.*(t19-t72)+t7.*t24.*t26.*(t53-t65).*2.0),0.0,-t10.*t133+t3.*t4.*(-t96+t108+t106.*(t19-t72))+t4.*t9.*t128,-t10.*t132+t3.*t4.*t130-t4.*t9.*t129,t10.*t126+t4.*t9.*(-t62+t101+t64.*(t53-t65))+t3.*t4.*(t89+t93.*(t19-t72)+t7.*t24.*t26.*(t53-t65).*2.0),0.0,t3.*t128-t9.*(-t96+t108+t106.*(t19-t72)),-t3.*t129-t9.*t130,-t9.*(t89+t93.*(t19-t72)+t7.*t24.*t26.*(t53-t65).*2.0)+t3.*(-t62+t101+t64.*(t53-t65)),0.0,system_radius.*t54+system_radius.*t61+system_radius.*t83+system_radius.*t118+system_radius.*t8.*t10-system_radius.*t33.*t103.*2.0-system_radius.*t14.*t128-system_radius.*t8.*t10.*t32.*2.0-system_radius.*t3.*t9.*(-t96+t108+t106.*(t19-t72)),system_radius.*t60+system_radius.*t4.*t8-system_radius.*t33.*t105.*2.0+system_radius.*t14.*t129-system_radius.*t4.*t8.*t32.*2.0-system_radius.*t3.*t9.*t130-system_radius.*t10.*t11.*t23.*t25.*2.0-system_radius.*t12.*t24.*t26.*t45.*2.0-system_radius.*t6.*t24.*t26.*t107.*2.0,system_radius.*t53+system_radius.*t101-system_radius.*t14.*(-t62+t101+t64.*(t53-t65))+system_radius.*t2.*t32.*2.0-system_radius.*t33.*(t53-t65).*2.0-system_radius.*t3.*t9.*(t89+t93.*(t19-t72)+t7.*t24.*t26.*(t53-t65).*2.0)-system_radius.*t8.*t11.*t12.*t24.*t26.*2.0,1.0],[4,4]);
