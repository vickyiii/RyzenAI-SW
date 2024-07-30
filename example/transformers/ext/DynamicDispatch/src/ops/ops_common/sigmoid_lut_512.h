const int lut_sz = 160 * 2;

static const uint16_t lnr_lutab[lut_sz * 2 * 2] = {
    0x0000, 0x0000, 0x3d2a, 0x3be4, 0x3d2e, 0x3beb, 0x3d33, 0x3bf3, 0x3d38,
    0x3bfa, 0x3d3c, 0x3c01, 0x3d41, 0x3c05, 0x3d46, 0x3c09, 0x0000, 0x0000,
    0x3d2a, 0x3be4, 0x3d2e, 0x3beb, 0x3d33, 0x3bf3, 0x3d38, 0x3bfa, 0x3d3c,
    0x3c01, 0x3d41, 0x3c05, 0x3d46, 0x3c09, 0x3d4b, 0x3c0d, 0x3d50, 0x3c12,
    0x3d56, 0x3c16, 0x3d5b, 0x3c1b, 0x3d61, 0x3c20, 0x3d66, 0x3c25, 0x3d6c,
    0x3c2a, 0x3d72, 0x3c2f, 0x3d4b, 0x3c0d, 0x3d50, 0x3c12, 0x3d56, 0x3c16,
    0x3d5b, 0x3c1b, 0x3d61, 0x3c20, 0x3d66, 0x3c25, 0x3d6c, 0x3c2a, 0x3d72,
    0x3c2f, 0x3d78, 0x3c35, 0x3d7f, 0x3c3a, 0x3d83, 0x3c40, 0x3d86, 0x3c46,
    0x3d89, 0x3c4c, 0x3d8d, 0x3c53, 0x3d90, 0x3c59, 0x3d94, 0x3c60, 0x3d78,
    0x3c35, 0x3d7f, 0x3c3a, 0x3d83, 0x3c40, 0x3d86, 0x3c46, 0x3d89, 0x3c4c,
    0x3d8d, 0x3c53, 0x3d90, 0x3c59, 0x3d94, 0x3c60, 0x3d97, 0x3c67, 0x3d9b,
    0x3c6e, 0x3d9f, 0x3c75, 0x3da3, 0x3c7d, 0x3da7, 0x3c82, 0x3dab, 0x3c86,
    0x3daf, 0x3c8a, 0x3db3, 0x3c8f, 0x3d97, 0x3c67, 0x3d9b, 0x3c6e, 0x3d9f,
    0x3c75, 0x3da3, 0x3c7d, 0x3da7, 0x3c82, 0x3dab, 0x3c86, 0x3daf, 0x3c8a,
    0x3db3, 0x3c8f, 0x3db8, 0x3c93, 0x3dbc, 0x3c97, 0x3dc1, 0x3c9c, 0x3dc5,
    0x3ca1, 0x3dca, 0x3ca6, 0x3dcf, 0x3cab, 0x3dd4, 0x3cb0, 0x3dd9, 0x3cb5,
    0x3db8, 0x3c93, 0x3dbc, 0x3c97, 0x3dc1, 0x3c9c, 0x3dc5, 0x3ca1, 0x3dca,
    0x3ca6, 0x3dcf, 0x3cab, 0x3dd4, 0x3cb0, 0x3dd9, 0x3cb5, 0x3dde, 0x3cbb,
    0x3de3, 0x3cc0, 0x3de9, 0x3cc6, 0x3dee, 0x3ccc, 0x3df4, 0x3cd2, 0x3df9,
    0x3cd9, 0x3dff, 0x3cdf, 0x3e03, 0x3ce6, 0x3dde, 0x3cbb, 0x3de3, 0x3cc0,
    0x3de9, 0x3cc6, 0x3dee, 0x3ccc, 0x3df4, 0x3cd2, 0x3df9, 0x3cd9, 0x3dff,
    0x3cdf, 0x3e03, 0x3ce6, 0x3e06, 0x3ced, 0x3e09, 0x3cf4, 0x3e0c, 0x3cfb,
    0x3e0f, 0x3d01, 0x3e12, 0x3d05, 0x3e15, 0x3d09, 0x3e19, 0x3d0d, 0x3e1c,
    0x3d11, 0x3e06, 0x3ced, 0x3e09, 0x3cf4, 0x3e0c, 0x3cfb, 0x3e0f, 0x3d01,
    0x3e12, 0x3d05, 0x3e15, 0x3d09, 0x3e19, 0x3d0d, 0x3e1c, 0x3d11, 0x3e20,
    0x3d15, 0x3e23, 0x3d1a, 0x3e27, 0x3d1e, 0x3e2a, 0x3d23, 0x3e2e, 0x3d28,
    0x3e32, 0x3d2c, 0x3e36, 0x3d31, 0x3e39, 0x3d36, 0x3e20, 0x3d15, 0x3e23,
    0x3d1a, 0x3e27, 0x3d1e, 0x3e2a, 0x3d23, 0x3e2e, 0x3d28, 0x3e32, 0x3d2c,
    0x3e36, 0x3d31, 0x3e39, 0x3d36, 0x3e3d, 0x3d3c, 0x3e41, 0x3d41, 0x3e45,
    0x3d47, 0x3e49, 0x3d4c, 0x3e4e, 0x3d52, 0x3e52, 0x3d58, 0x3e56, 0x3d5e,
    0x3e5a, 0x3d64, 0x3e3d, 0x3d3c, 0x3e41, 0x3d41, 0x3e45, 0x3d47, 0x3e49,
    0x3d4c, 0x3e4e, 0x3d52, 0x3e52, 0x3d58, 0x3e56, 0x3d5e, 0x3e5a, 0x3d64,
    0x3e5f, 0x3d6b, 0x3e63, 0x3d71, 0x3e68, 0x3d78, 0x3e6c, 0x3d7f, 0x3e71,
    0x3d83, 0x3e75, 0x3d86, 0x3e7a, 0x3d8a, 0x3e7f, 0x3d8e, 0x3e5f, 0x3d6b,
    0x3e63, 0x3d71, 0x3e68, 0x3d78, 0x3e6c, 0x3d7f, 0x3e71, 0x3d83, 0x3e75,
    0x3d86, 0x3e7a, 0x3d8a, 0x3e7f, 0x3d8e, 0x3e82, 0x3d91, 0x3e84, 0x3d95,
    0x3e87, 0x3d99, 0x3e89, 0x3d9d, 0x3e8b, 0x3da2, 0x3e8e, 0x3da6, 0x3e90,
    0x3daa, 0x3e93, 0x3dae, 0x3e82, 0x3d91, 0x3e84, 0x3d95, 0x3e87, 0x3d99,
    0x3e89, 0x3d9d, 0x3e8b, 0x3da2, 0x3e8e, 0x3da6, 0x3e90, 0x3daa, 0x3e93,
    0x3dae, 0x3e95, 0x3db3, 0x3e98, 0x3db7, 0x3e9b, 0x3dbc, 0x3e9d, 0x3dc1,
    0x3ea0, 0x3dc6, 0x3ea2, 0x3dca, 0x3ea5, 0x3dcf, 0x3ea7, 0x3dd4, 0x3e95,
    0x3db3, 0x3e98, 0x3db7, 0x3e9b, 0x3dbc, 0x3e9d, 0x3dc1, 0x3ea0, 0x3dc6,
    0x3ea2, 0x3dca, 0x3ea5, 0x3dcf, 0x3ea7, 0x3dd4, 0x3eaa, 0x3dda, 0x3eac,
    0x3ddf, 0x3eaf, 0x3de4, 0x3eb1, 0x3de9, 0x3eb4, 0x3def, 0x3eb7, 0x3df4,
    0x3eb9, 0x3dfa, 0x3ebc, 0x3dff, 0x3eaa, 0x3dda, 0x3eac, 0x3ddf, 0x3eaf,
    0x3de4, 0x3eb1, 0x3de9, 0x3eb4, 0x3def, 0x3eb7, 0x3df4, 0x3eb9, 0x3dfa,
    0x3ebc, 0x3dff, 0x3ebe, 0x3e03, 0x3ec1, 0x3e05, 0x3ec3, 0x3e08, 0x3ec5,
    0x3e0b, 0x3ec8, 0x3e0e, 0x3eca, 0x3e11, 0x3ecd, 0x3e14, 0x3ecf, 0x3e17,
    0x3ebe, 0x3e03, 0x3ec1, 0x3e05, 0x3ec3, 0x3e08, 0x3ec5, 0x3e0b, 0x3ec8,
    0x3e0e, 0x3eca, 0x3e11, 0x3ecd, 0x3e14, 0x3ecf, 0x3e17, 0x3ed1, 0x3e1a,
    0x3ed3, 0x3e1d, 0x3ed6, 0x3e20, 0x3ed8, 0x3e23, 0x3eda, 0x3e26, 0x3edc,
    0x3e2a, 0x3ede, 0x3e2d, 0x3ee0, 0x3e30, 0x3ed1, 0x3e1a, 0x3ed3, 0x3e1d,
    0x3ed6, 0x3e20, 0x3ed8, 0x3e23, 0x3eda, 0x3e26, 0x3edc, 0x3e2a, 0x3ede,
    0x3e2d, 0x3ee0, 0x3e30, 0x3ee2, 0x3e33, 0x3ee4, 0x3e36, 0x3ee5, 0x3e39,
    0x3ee7, 0x3e3c, 0x3ee9, 0x3e3f, 0x3eeb, 0x3e42, 0x3eec, 0x3e45, 0x3eee,
    0x3e48, 0x3ee2, 0x3e33, 0x3ee4, 0x3e36, 0x3ee5, 0x3e39, 0x3ee7, 0x3e3c,
    0x3ee9, 0x3e3f, 0x3eeb, 0x3e42, 0x3eec, 0x3e45, 0x3eee, 0x3e48, 0x3eef,
    0x3e4b, 0x3ef0, 0x3e4e, 0x3ef2, 0x3e50, 0x3ef3, 0x3e53, 0x3ef4, 0x3e56,
    0x3ef5, 0x3e59, 0x3ef6, 0x3e5b, 0x3ef7, 0x3e5e, 0x3eef, 0x3e4b, 0x3ef0,
    0x3e4e, 0x3ef2, 0x3e50, 0x3ef3, 0x3e53, 0x3ef4, 0x3e56, 0x3ef5, 0x3e59,
    0x3ef6, 0x3e5b, 0x3ef7, 0x3e5e, 0x3ef8, 0x3e60, 0x3ef9, 0x3e63, 0x3efa,
    0x3e65, 0x3efb, 0x3e67, 0x3efc, 0x3e6a, 0x3efc, 0x3e6c, 0x3efd, 0x3e6e,
    0x3efd, 0x3e70, 0x3ef8, 0x3e60, 0x3ef9, 0x3e63, 0x3efa, 0x3e65, 0x3efb,
    0x3e67, 0x3efc, 0x3e6a, 0x3efc, 0x3e6c, 0x3efd, 0x3e6e, 0x3efd, 0x3e70,
    0x3efe, 0x3e72, 0x3efe, 0x3e73, 0x3efe, 0x3e75, 0x3eff, 0x3e76, 0x3eff,
    0x3e78, 0x3eff, 0x3e79, 0x3eff, 0x3e7a, 0x3f00, 0x3e7c, 0x3efe, 0x3e72,
    0x3efe, 0x3e73, 0x3efe, 0x3e75, 0x3eff, 0x3e76, 0x3eff, 0x3e78, 0x3eff,
    0x3e79, 0x3eff, 0x3e7a, 0x3f00, 0x3e7c, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d,
    0x3f00, 0x3e7e, 0x3f00, 0x3e7f, 0x3f00, 0x3e7f, 0x3f00, 0x3e80, 0x3f00,
    0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d, 0x3f00, 0x3e7e,
    0x3f00, 0x3e7f, 0x3f00, 0x3e7f, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00,
    0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e7f,
    0x3f00, 0x3e7f, 0x3f00, 0x3e7e, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d, 0x3f00,
    0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e7f, 0x3f00, 0x3e7f,
    0x3f00, 0x3e7e, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d, 0x3f00, 0x3e7c, 0x3f00,
    0x3e7a, 0x3f00, 0x3e79, 0x3f00, 0x3e78, 0x3f01, 0x3e76, 0x3f01, 0x3e75,
    0x3f01, 0x3e73, 0x3f01, 0x3e72, 0x3f00, 0x3e7c, 0x3f00, 0x3e7a, 0x3f00,
    0x3e79, 0x3f00, 0x3e78, 0x3f01, 0x3e76, 0x3f01, 0x3e75, 0x3f01, 0x3e73,
    0x3f01, 0x3e72, 0x3f01, 0x3e70, 0x3f02, 0x3e6e, 0x3f02, 0x3e6c, 0x3f02,
    0x3e6a, 0x3f03, 0x3e67, 0x3f03, 0x3e65, 0x3f03, 0x3e63, 0x3f04, 0x3e60,
    0x3f01, 0x3e70, 0x3f02, 0x3e6e, 0x3f02, 0x3e6c, 0x3f02, 0x3e6a, 0x3f03,
    0x3e67, 0x3f03, 0x3e65, 0x3f03, 0x3e63, 0x3f04, 0x3e60, 0x3f04, 0x3e5e,
    0x3f05, 0x3e5b, 0x3f05, 0x3e59, 0x3f06, 0x3e56, 0x3f06, 0x3e53, 0x3f07,
    0x3e50, 0x3f08, 0x3e4e, 0x3f08, 0x3e4b, 0x3f04, 0x3e5e, 0x3f05, 0x3e5b,
    0x3f05, 0x3e59, 0x3f06, 0x3e56, 0x3f06, 0x3e53, 0x3f07, 0x3e50, 0x3f08,
    0x3e4e, 0x3f08, 0x3e4b, 0x3f09, 0x3e48, 0x3f0a, 0x3e45, 0x3f0b, 0x3e42,
    0x3f0c, 0x3e3f, 0x3f0c, 0x3e3c, 0x3f0d, 0x3e39, 0x3f0e, 0x3e36, 0x3f0f,
    0x3e33, 0x3f09, 0x3e48, 0x3f0a, 0x3e45, 0x3f0b, 0x3e42, 0x3f0c, 0x3e3f,
    0x3f0c, 0x3e3c, 0x3f0d, 0x3e39, 0x3f0e, 0x3e36, 0x3f0f, 0x3e33, 0x3f10,
    0x3e30, 0x3f11, 0x3e2d, 0x3f12, 0x3e2a, 0x3f13, 0x3e26, 0x3f14, 0x3e23,
    0x3f15, 0x3e20, 0x3f16, 0x3e1d, 0x3f17, 0x3e1a, 0x3f10, 0x3e30, 0x3f11,
    0x3e2d, 0x3f12, 0x3e2a, 0x3f13, 0x3e26, 0x3f14, 0x3e23, 0x3f15, 0x3e20,
    0x3f16, 0x3e1d, 0x3f17, 0x3e1a, 0x3f19, 0x3e17, 0x3f1a, 0x3e14, 0x3f1b,
    0x3e11, 0x3f1c, 0x3e0e, 0x3f1d, 0x3e0b, 0x3f1f, 0x3e08, 0x3f20, 0x3e05,
    0x3f21, 0x3e03, 0x3f19, 0x3e17, 0x3f1a, 0x3e14, 0x3f1b, 0x3e11, 0x3f1c,
    0x3e0e, 0x3f1d, 0x3e0b, 0x3f1f, 0x3e08, 0x3f20, 0x3e05, 0x3f21, 0x3e03,
    0x3f22, 0x3dff, 0x3f23, 0x3dfa, 0x3f25, 0x3df4, 0x3f26, 0x3def, 0x3f27,
    0x3de9, 0x3f29, 0x3de4, 0x3f2a, 0x3ddf, 0x3f2b, 0x3dda, 0x3f22, 0x3dff,
    0x3f23, 0x3dfa, 0x3f25, 0x3df4, 0x3f26, 0x3def, 0x3f27, 0x3de9, 0x3f29,
    0x3de4, 0x3f2a, 0x3ddf, 0x3f2b, 0x3dda, 0x3f2c, 0x3dd4, 0x3f2e, 0x3dcf,
    0x3f2f, 0x3dca, 0x3f30, 0x3dc6, 0x3f31, 0x3dc1, 0x3f33, 0x3dbc, 0x3f34,
    0x3db7, 0x3f35, 0x3db3, 0x3f2c, 0x3dd4, 0x3f2e, 0x3dcf, 0x3f2f, 0x3dca,
    0x3f30, 0x3dc6, 0x3f31, 0x3dc1, 0x3f33, 0x3dbc, 0x3f34, 0x3db7, 0x3f35,
    0x3db3, 0x3f37, 0x3dae, 0x3f38, 0x3daa, 0x3f39, 0x3da6, 0x3f3a, 0x3da2,
    0x3f3b, 0x3d9d, 0x3f3d, 0x3d99, 0x3f3e, 0x3d95, 0x3f3f, 0x3d91, 0x3f37,
    0x3dae, 0x3f38, 0x3daa, 0x3f39, 0x3da6, 0x3f3a, 0x3da2, 0x3f3b, 0x3d9d,
    0x3f3d, 0x3d99, 0x3f3e, 0x3d95, 0x3f3f, 0x3d91, 0x3f40, 0x3d8e, 0x3f41,
    0x3d8a, 0x3f43, 0x3d86, 0x3f44, 0x3d83, 0x3f45, 0x3d7f, 0x3f46, 0x3d78,
    0x3f47, 0x3d71, 0x3f48, 0x3d6b, 0x3f40, 0x3d8e, 0x3f41, 0x3d8a, 0x3f43,
    0x3d86, 0x3f44, 0x3d83, 0x3f45, 0x3d7f, 0x3f46, 0x3d78, 0x3f47, 0x3d71,
    0x3f48, 0x3d6b, 0x3f49, 0x3d64, 0x3f4a, 0x3d5e, 0x3f4c, 0x3d58, 0x3f4d,
    0x3d52, 0x3f4e, 0x3d4c, 0x3f4f, 0x3d47, 0x3f50, 0x3d41, 0x3f51, 0x3d3c,
    0x3f49, 0x3d64, 0x3f4a, 0x3d5e, 0x3f4c, 0x3d58, 0x3f4d, 0x3d52, 0x3f4e,
    0x3d4c, 0x3f4f, 0x3d47, 0x3f50, 0x3d41, 0x3f51, 0x3d3c, 0x3f52, 0x3d36,
    0x3f53, 0x3d31, 0x3f54, 0x3d2c, 0x3f55, 0x3d28, 0x3f55, 0x3d23, 0x3f56,
    0x3d1e, 0x3f57, 0x3d1a, 0x3f58, 0x3d15, 0x3f52, 0x3d36, 0x3f53, 0x3d31,
    0x3f54, 0x3d2c, 0x3f55, 0x3d28, 0x3f55, 0x3d23, 0x3f56, 0x3d1e, 0x3f57,
    0x3d1a, 0x3f58, 0x3d15, 0x3f59, 0x3d11, 0x3f5a, 0x3d0d, 0x3f5b, 0x3d09,
    0x3f5b, 0x3d05, 0x3f5c, 0x3d01, 0x3f5d, 0x3cfb, 0x3f5e, 0x3cf4, 0x3f5f,
    0x3ced, 0x3f59, 0x3d11, 0x3f5a, 0x3d0d, 0x3f5b, 0x3d09, 0x3f5b, 0x3d05,
    0x3f5c, 0x3d01, 0x3f5d, 0x3cfb, 0x3f5e, 0x3cf4, 0x3f5f, 0x3ced, 0x3f5f,
    0x3ce6, 0x3f60, 0x3cdf, 0x3f61, 0x3cd9, 0x3f62, 0x3cd2, 0x3f62, 0x3ccc,
    0x3f63, 0x3cc6, 0x3f64, 0x3cc0, 0x3f64, 0x3cbb, 0x3f5f, 0x3ce6, 0x3f60,
    0x3cdf, 0x3f61, 0x3cd9, 0x3f62, 0x3cd2, 0x3f62, 0x3ccc, 0x3f63, 0x3cc6,
    0x3f64, 0x3cc0, 0x3f64, 0x3cbb, 0x3f65, 0x3cb5, 0x3f66, 0x3cb0, 0x3f66,
    0x3cab, 0x3f67, 0x3ca6, 0x3f67, 0x3ca1, 0x3f68, 0x3c9c, 0x3f68, 0x3c97,
    0x3f69, 0x3c93, 0x3f65, 0x3cb5, 0x3f66, 0x3cb0, 0x3f66, 0x3cab, 0x3f67,
    0x3ca6, 0x3f67, 0x3ca1, 0x3f68, 0x3c9c, 0x3f68, 0x3c97, 0x3f69, 0x3c93,
    0x3f6a, 0x3c8f, 0x3f6a, 0x3c8a, 0x3f6b, 0x3c86, 0x3f6b, 0x3c82, 0x3f6c,
    0x3c7d, 0x3f6c, 0x3c75, 0x3f6d, 0x3c6e, 0x3f6d, 0x3c67, 0x3f6a, 0x3c8f,
    0x3f6a, 0x3c8a, 0x3f6b, 0x3c86, 0x3f6b, 0x3c82, 0x3f6c, 0x3c7d, 0x3f6c,
    0x3c75, 0x3f6d, 0x3c6e, 0x3f6d, 0x3c67, 0x3f6e, 0x3c60, 0x3f6e, 0x3c59,
    0x3f6e, 0x3c53, 0x3f6f, 0x3c4c, 0x3f6f, 0x3c46, 0x3f70, 0x3c40, 0x3f70,
    0x3c3a, 0x3f70, 0x3c35, 0x3f6e, 0x3c60, 0x3f6e, 0x3c59, 0x3f6e, 0x3c53,
    0x3f6f, 0x3c4c, 0x3f6f, 0x3c46, 0x3f70, 0x3c40, 0x3f70, 0x3c3a, 0x3f70,
    0x3c35, 0x3f71, 0x3c2f, 0x3f71, 0x3c2a, 0x3f72, 0x3c25, 0x3f72, 0x3c20,
    0x3f72, 0x3c1b, 0x3f73, 0x3c16, 0x3f73, 0x3c12, 0x3f73, 0x3c0d, 0x3f71,
    0x3c2f, 0x3f71, 0x3c2a, 0x3f72, 0x3c25, 0x3f72, 0x3c20, 0x3f72, 0x3c1b,
    0x3f73, 0x3c16, 0x3f73, 0x3c12, 0x3f73, 0x3c0d, 0x3f74, 0x3c09, 0x3f74,
    0x3c05, 0x3f74, 0x3c01, 0x3f75, 0x3bfa, 0x3f75, 0x3bf3, 0x3f75, 0x3beb,
    0x3f75, 0x3be4, 0x3f80, 0x0000, 0x3f74, 0x3c09, 0x3f74, 0x3c05, 0x3f74,
    0x3c01, 0x3f75, 0x3bfa, 0x3f75, 0x3bf3, 0x3f75, 0x3beb, 0x3f75, 0x3be4,
    0x3f80, 0x0000};

static const uint16_t lnr_lutcd[lut_sz * 2 * 2] = {
    0x0000, 0x0000, 0x3d2a, 0x3be4, 0x3d2e, 0x3beb, 0x3d33, 0x3bf3, 0x3d38,
    0x3bfa, 0x3d3c, 0x3c01, 0x3d41, 0x3c05, 0x3d46, 0x3c09, 0x0000, 0x0000,
    0x3d2a, 0x3be4, 0x3d2e, 0x3beb, 0x3d33, 0x3bf3, 0x3d38, 0x3bfa, 0x3d3c,
    0x3c01, 0x3d41, 0x3c05, 0x3d46, 0x3c09, 0x3d4b, 0x3c0d, 0x3d50, 0x3c12,
    0x3d56, 0x3c16, 0x3d5b, 0x3c1b, 0x3d61, 0x3c20, 0x3d66, 0x3c25, 0x3d6c,
    0x3c2a, 0x3d72, 0x3c2f, 0x3d4b, 0x3c0d, 0x3d50, 0x3c12, 0x3d56, 0x3c16,
    0x3d5b, 0x3c1b, 0x3d61, 0x3c20, 0x3d66, 0x3c25, 0x3d6c, 0x3c2a, 0x3d72,
    0x3c2f, 0x3d78, 0x3c35, 0x3d7f, 0x3c3a, 0x3d83, 0x3c40, 0x3d86, 0x3c46,
    0x3d89, 0x3c4c, 0x3d8d, 0x3c53, 0x3d90, 0x3c59, 0x3d94, 0x3c60, 0x3d78,
    0x3c35, 0x3d7f, 0x3c3a, 0x3d83, 0x3c40, 0x3d86, 0x3c46, 0x3d89, 0x3c4c,
    0x3d8d, 0x3c53, 0x3d90, 0x3c59, 0x3d94, 0x3c60, 0x3d97, 0x3c67, 0x3d9b,
    0x3c6e, 0x3d9f, 0x3c75, 0x3da3, 0x3c7d, 0x3da7, 0x3c82, 0x3dab, 0x3c86,
    0x3daf, 0x3c8a, 0x3db3, 0x3c8f, 0x3d97, 0x3c67, 0x3d9b, 0x3c6e, 0x3d9f,
    0x3c75, 0x3da3, 0x3c7d, 0x3da7, 0x3c82, 0x3dab, 0x3c86, 0x3daf, 0x3c8a,
    0x3db3, 0x3c8f, 0x3db8, 0x3c93, 0x3dbc, 0x3c97, 0x3dc1, 0x3c9c, 0x3dc5,
    0x3ca1, 0x3dca, 0x3ca6, 0x3dcf, 0x3cab, 0x3dd4, 0x3cb0, 0x3dd9, 0x3cb5,
    0x3db8, 0x3c93, 0x3dbc, 0x3c97, 0x3dc1, 0x3c9c, 0x3dc5, 0x3ca1, 0x3dca,
    0x3ca6, 0x3dcf, 0x3cab, 0x3dd4, 0x3cb0, 0x3dd9, 0x3cb5, 0x3dde, 0x3cbb,
    0x3de3, 0x3cc0, 0x3de9, 0x3cc6, 0x3dee, 0x3ccc, 0x3df4, 0x3cd2, 0x3df9,
    0x3cd9, 0x3dff, 0x3cdf, 0x3e03, 0x3ce6, 0x3dde, 0x3cbb, 0x3de3, 0x3cc0,
    0x3de9, 0x3cc6, 0x3dee, 0x3ccc, 0x3df4, 0x3cd2, 0x3df9, 0x3cd9, 0x3dff,
    0x3cdf, 0x3e03, 0x3ce6, 0x3e06, 0x3ced, 0x3e09, 0x3cf4, 0x3e0c, 0x3cfb,
    0x3e0f, 0x3d01, 0x3e12, 0x3d05, 0x3e15, 0x3d09, 0x3e19, 0x3d0d, 0x3e1c,
    0x3d11, 0x3e06, 0x3ced, 0x3e09, 0x3cf4, 0x3e0c, 0x3cfb, 0x3e0f, 0x3d01,
    0x3e12, 0x3d05, 0x3e15, 0x3d09, 0x3e19, 0x3d0d, 0x3e1c, 0x3d11, 0x3e20,
    0x3d15, 0x3e23, 0x3d1a, 0x3e27, 0x3d1e, 0x3e2a, 0x3d23, 0x3e2e, 0x3d28,
    0x3e32, 0x3d2c, 0x3e36, 0x3d31, 0x3e39, 0x3d36, 0x3e20, 0x3d15, 0x3e23,
    0x3d1a, 0x3e27, 0x3d1e, 0x3e2a, 0x3d23, 0x3e2e, 0x3d28, 0x3e32, 0x3d2c,
    0x3e36, 0x3d31, 0x3e39, 0x3d36, 0x3e3d, 0x3d3c, 0x3e41, 0x3d41, 0x3e45,
    0x3d47, 0x3e49, 0x3d4c, 0x3e4e, 0x3d52, 0x3e52, 0x3d58, 0x3e56, 0x3d5e,
    0x3e5a, 0x3d64, 0x3e3d, 0x3d3c, 0x3e41, 0x3d41, 0x3e45, 0x3d47, 0x3e49,
    0x3d4c, 0x3e4e, 0x3d52, 0x3e52, 0x3d58, 0x3e56, 0x3d5e, 0x3e5a, 0x3d64,
    0x3e5f, 0x3d6b, 0x3e63, 0x3d71, 0x3e68, 0x3d78, 0x3e6c, 0x3d7f, 0x3e71,
    0x3d83, 0x3e75, 0x3d86, 0x3e7a, 0x3d8a, 0x3e7f, 0x3d8e, 0x3e5f, 0x3d6b,
    0x3e63, 0x3d71, 0x3e68, 0x3d78, 0x3e6c, 0x3d7f, 0x3e71, 0x3d83, 0x3e75,
    0x3d86, 0x3e7a, 0x3d8a, 0x3e7f, 0x3d8e, 0x3e82, 0x3d91, 0x3e84, 0x3d95,
    0x3e87, 0x3d99, 0x3e89, 0x3d9d, 0x3e8b, 0x3da2, 0x3e8e, 0x3da6, 0x3e90,
    0x3daa, 0x3e93, 0x3dae, 0x3e82, 0x3d91, 0x3e84, 0x3d95, 0x3e87, 0x3d99,
    0x3e89, 0x3d9d, 0x3e8b, 0x3da2, 0x3e8e, 0x3da6, 0x3e90, 0x3daa, 0x3e93,
    0x3dae, 0x3e95, 0x3db3, 0x3e98, 0x3db7, 0x3e9b, 0x3dbc, 0x3e9d, 0x3dc1,
    0x3ea0, 0x3dc6, 0x3ea2, 0x3dca, 0x3ea5, 0x3dcf, 0x3ea7, 0x3dd4, 0x3e95,
    0x3db3, 0x3e98, 0x3db7, 0x3e9b, 0x3dbc, 0x3e9d, 0x3dc1, 0x3ea0, 0x3dc6,
    0x3ea2, 0x3dca, 0x3ea5, 0x3dcf, 0x3ea7, 0x3dd4, 0x3eaa, 0x3dda, 0x3eac,
    0x3ddf, 0x3eaf, 0x3de4, 0x3eb1, 0x3de9, 0x3eb4, 0x3def, 0x3eb7, 0x3df4,
    0x3eb9, 0x3dfa, 0x3ebc, 0x3dff, 0x3eaa, 0x3dda, 0x3eac, 0x3ddf, 0x3eaf,
    0x3de4, 0x3eb1, 0x3de9, 0x3eb4, 0x3def, 0x3eb7, 0x3df4, 0x3eb9, 0x3dfa,
    0x3ebc, 0x3dff, 0x3ebe, 0x3e03, 0x3ec1, 0x3e05, 0x3ec3, 0x3e08, 0x3ec5,
    0x3e0b, 0x3ec8, 0x3e0e, 0x3eca, 0x3e11, 0x3ecd, 0x3e14, 0x3ecf, 0x3e17,
    0x3ebe, 0x3e03, 0x3ec1, 0x3e05, 0x3ec3, 0x3e08, 0x3ec5, 0x3e0b, 0x3ec8,
    0x3e0e, 0x3eca, 0x3e11, 0x3ecd, 0x3e14, 0x3ecf, 0x3e17, 0x3ed1, 0x3e1a,
    0x3ed3, 0x3e1d, 0x3ed6, 0x3e20, 0x3ed8, 0x3e23, 0x3eda, 0x3e26, 0x3edc,
    0x3e2a, 0x3ede, 0x3e2d, 0x3ee0, 0x3e30, 0x3ed1, 0x3e1a, 0x3ed3, 0x3e1d,
    0x3ed6, 0x3e20, 0x3ed8, 0x3e23, 0x3eda, 0x3e26, 0x3edc, 0x3e2a, 0x3ede,
    0x3e2d, 0x3ee0, 0x3e30, 0x3ee2, 0x3e33, 0x3ee4, 0x3e36, 0x3ee5, 0x3e39,
    0x3ee7, 0x3e3c, 0x3ee9, 0x3e3f, 0x3eeb, 0x3e42, 0x3eec, 0x3e45, 0x3eee,
    0x3e48, 0x3ee2, 0x3e33, 0x3ee4, 0x3e36, 0x3ee5, 0x3e39, 0x3ee7, 0x3e3c,
    0x3ee9, 0x3e3f, 0x3eeb, 0x3e42, 0x3eec, 0x3e45, 0x3eee, 0x3e48, 0x3eef,
    0x3e4b, 0x3ef0, 0x3e4e, 0x3ef2, 0x3e50, 0x3ef3, 0x3e53, 0x3ef4, 0x3e56,
    0x3ef5, 0x3e59, 0x3ef6, 0x3e5b, 0x3ef7, 0x3e5e, 0x3eef, 0x3e4b, 0x3ef0,
    0x3e4e, 0x3ef2, 0x3e50, 0x3ef3, 0x3e53, 0x3ef4, 0x3e56, 0x3ef5, 0x3e59,
    0x3ef6, 0x3e5b, 0x3ef7, 0x3e5e, 0x3ef8, 0x3e60, 0x3ef9, 0x3e63, 0x3efa,
    0x3e65, 0x3efb, 0x3e67, 0x3efc, 0x3e6a, 0x3efc, 0x3e6c, 0x3efd, 0x3e6e,
    0x3efd, 0x3e70, 0x3ef8, 0x3e60, 0x3ef9, 0x3e63, 0x3efa, 0x3e65, 0x3efb,
    0x3e67, 0x3efc, 0x3e6a, 0x3efc, 0x3e6c, 0x3efd, 0x3e6e, 0x3efd, 0x3e70,
    0x3efe, 0x3e72, 0x3efe, 0x3e73, 0x3efe, 0x3e75, 0x3eff, 0x3e76, 0x3eff,
    0x3e78, 0x3eff, 0x3e79, 0x3eff, 0x3e7a, 0x3f00, 0x3e7c, 0x3efe, 0x3e72,
    0x3efe, 0x3e73, 0x3efe, 0x3e75, 0x3eff, 0x3e76, 0x3eff, 0x3e78, 0x3eff,
    0x3e79, 0x3eff, 0x3e7a, 0x3f00, 0x3e7c, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d,
    0x3f00, 0x3e7e, 0x3f00, 0x3e7f, 0x3f00, 0x3e7f, 0x3f00, 0x3e80, 0x3f00,
    0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d, 0x3f00, 0x3e7e,
    0x3f00, 0x3e7f, 0x3f00, 0x3e7f, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00,
    0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e7f,
    0x3f00, 0x3e7f, 0x3f00, 0x3e7e, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d, 0x3f00,
    0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e80, 0x3f00, 0x3e7f, 0x3f00, 0x3e7f,
    0x3f00, 0x3e7e, 0x3f00, 0x3e7d, 0x3f00, 0x3e7d, 0x3f00, 0x3e7c, 0x3f00,
    0x3e7a, 0x3f00, 0x3e79, 0x3f00, 0x3e78, 0x3f01, 0x3e76, 0x3f01, 0x3e75,
    0x3f01, 0x3e73, 0x3f01, 0x3e72, 0x3f00, 0x3e7c, 0x3f00, 0x3e7a, 0x3f00,
    0x3e79, 0x3f00, 0x3e78, 0x3f01, 0x3e76, 0x3f01, 0x3e75, 0x3f01, 0x3e73,
    0x3f01, 0x3e72, 0x3f01, 0x3e70, 0x3f02, 0x3e6e, 0x3f02, 0x3e6c, 0x3f02,
    0x3e6a, 0x3f03, 0x3e67, 0x3f03, 0x3e65, 0x3f03, 0x3e63, 0x3f04, 0x3e60,
    0x3f01, 0x3e70, 0x3f02, 0x3e6e, 0x3f02, 0x3e6c, 0x3f02, 0x3e6a, 0x3f03,
    0x3e67, 0x3f03, 0x3e65, 0x3f03, 0x3e63, 0x3f04, 0x3e60, 0x3f04, 0x3e5e,
    0x3f05, 0x3e5b, 0x3f05, 0x3e59, 0x3f06, 0x3e56, 0x3f06, 0x3e53, 0x3f07,
    0x3e50, 0x3f08, 0x3e4e, 0x3f08, 0x3e4b, 0x3f04, 0x3e5e, 0x3f05, 0x3e5b,
    0x3f05, 0x3e59, 0x3f06, 0x3e56, 0x3f06, 0x3e53, 0x3f07, 0x3e50, 0x3f08,
    0x3e4e, 0x3f08, 0x3e4b, 0x3f09, 0x3e48, 0x3f0a, 0x3e45, 0x3f0b, 0x3e42,
    0x3f0c, 0x3e3f, 0x3f0c, 0x3e3c, 0x3f0d, 0x3e39, 0x3f0e, 0x3e36, 0x3f0f,
    0x3e33, 0x3f09, 0x3e48, 0x3f0a, 0x3e45, 0x3f0b, 0x3e42, 0x3f0c, 0x3e3f,
    0x3f0c, 0x3e3c, 0x3f0d, 0x3e39, 0x3f0e, 0x3e36, 0x3f0f, 0x3e33, 0x3f10,
    0x3e30, 0x3f11, 0x3e2d, 0x3f12, 0x3e2a, 0x3f13, 0x3e26, 0x3f14, 0x3e23,
    0x3f15, 0x3e20, 0x3f16, 0x3e1d, 0x3f17, 0x3e1a, 0x3f10, 0x3e30, 0x3f11,
    0x3e2d, 0x3f12, 0x3e2a, 0x3f13, 0x3e26, 0x3f14, 0x3e23, 0x3f15, 0x3e20,
    0x3f16, 0x3e1d, 0x3f17, 0x3e1a, 0x3f19, 0x3e17, 0x3f1a, 0x3e14, 0x3f1b,
    0x3e11, 0x3f1c, 0x3e0e, 0x3f1d, 0x3e0b, 0x3f1f, 0x3e08, 0x3f20, 0x3e05,
    0x3f21, 0x3e03, 0x3f19, 0x3e17, 0x3f1a, 0x3e14, 0x3f1b, 0x3e11, 0x3f1c,
    0x3e0e, 0x3f1d, 0x3e0b, 0x3f1f, 0x3e08, 0x3f20, 0x3e05, 0x3f21, 0x3e03,
    0x3f22, 0x3dff, 0x3f23, 0x3dfa, 0x3f25, 0x3df4, 0x3f26, 0x3def, 0x3f27,
    0x3de9, 0x3f29, 0x3de4, 0x3f2a, 0x3ddf, 0x3f2b, 0x3dda, 0x3f22, 0x3dff,
    0x3f23, 0x3dfa, 0x3f25, 0x3df4, 0x3f26, 0x3def, 0x3f27, 0x3de9, 0x3f29,
    0x3de4, 0x3f2a, 0x3ddf, 0x3f2b, 0x3dda, 0x3f2c, 0x3dd4, 0x3f2e, 0x3dcf,
    0x3f2f, 0x3dca, 0x3f30, 0x3dc6, 0x3f31, 0x3dc1, 0x3f33, 0x3dbc, 0x3f34,
    0x3db7, 0x3f35, 0x3db3, 0x3f2c, 0x3dd4, 0x3f2e, 0x3dcf, 0x3f2f, 0x3dca,
    0x3f30, 0x3dc6, 0x3f31, 0x3dc1, 0x3f33, 0x3dbc, 0x3f34, 0x3db7, 0x3f35,
    0x3db3, 0x3f37, 0x3dae, 0x3f38, 0x3daa, 0x3f39, 0x3da6, 0x3f3a, 0x3da2,
    0x3f3b, 0x3d9d, 0x3f3d, 0x3d99, 0x3f3e, 0x3d95, 0x3f3f, 0x3d91, 0x3f37,
    0x3dae, 0x3f38, 0x3daa, 0x3f39, 0x3da6, 0x3f3a, 0x3da2, 0x3f3b, 0x3d9d,
    0x3f3d, 0x3d99, 0x3f3e, 0x3d95, 0x3f3f, 0x3d91, 0x3f40, 0x3d8e, 0x3f41,
    0x3d8a, 0x3f43, 0x3d86, 0x3f44, 0x3d83, 0x3f45, 0x3d7f, 0x3f46, 0x3d78,
    0x3f47, 0x3d71, 0x3f48, 0x3d6b, 0x3f40, 0x3d8e, 0x3f41, 0x3d8a, 0x3f43,
    0x3d86, 0x3f44, 0x3d83, 0x3f45, 0x3d7f, 0x3f46, 0x3d78, 0x3f47, 0x3d71,
    0x3f48, 0x3d6b, 0x3f49, 0x3d64, 0x3f4a, 0x3d5e, 0x3f4c, 0x3d58, 0x3f4d,
    0x3d52, 0x3f4e, 0x3d4c, 0x3f4f, 0x3d47, 0x3f50, 0x3d41, 0x3f51, 0x3d3c,
    0x3f49, 0x3d64, 0x3f4a, 0x3d5e, 0x3f4c, 0x3d58, 0x3f4d, 0x3d52, 0x3f4e,
    0x3d4c, 0x3f4f, 0x3d47, 0x3f50, 0x3d41, 0x3f51, 0x3d3c, 0x3f52, 0x3d36,
    0x3f53, 0x3d31, 0x3f54, 0x3d2c, 0x3f55, 0x3d28, 0x3f55, 0x3d23, 0x3f56,
    0x3d1e, 0x3f57, 0x3d1a, 0x3f58, 0x3d15, 0x3f52, 0x3d36, 0x3f53, 0x3d31,
    0x3f54, 0x3d2c, 0x3f55, 0x3d28, 0x3f55, 0x3d23, 0x3f56, 0x3d1e, 0x3f57,
    0x3d1a, 0x3f58, 0x3d15, 0x3f59, 0x3d11, 0x3f5a, 0x3d0d, 0x3f5b, 0x3d09,
    0x3f5b, 0x3d05, 0x3f5c, 0x3d01, 0x3f5d, 0x3cfb, 0x3f5e, 0x3cf4, 0x3f5f,
    0x3ced, 0x3f59, 0x3d11, 0x3f5a, 0x3d0d, 0x3f5b, 0x3d09, 0x3f5b, 0x3d05,
    0x3f5c, 0x3d01, 0x3f5d, 0x3cfb, 0x3f5e, 0x3cf4, 0x3f5f, 0x3ced, 0x3f5f,
    0x3ce6, 0x3f60, 0x3cdf, 0x3f61, 0x3cd9, 0x3f62, 0x3cd2, 0x3f62, 0x3ccc,
    0x3f63, 0x3cc6, 0x3f64, 0x3cc0, 0x3f64, 0x3cbb, 0x3f5f, 0x3ce6, 0x3f60,
    0x3cdf, 0x3f61, 0x3cd9, 0x3f62, 0x3cd2, 0x3f62, 0x3ccc, 0x3f63, 0x3cc6,
    0x3f64, 0x3cc0, 0x3f64, 0x3cbb, 0x3f65, 0x3cb5, 0x3f66, 0x3cb0, 0x3f66,
    0x3cab, 0x3f67, 0x3ca6, 0x3f67, 0x3ca1, 0x3f68, 0x3c9c, 0x3f68, 0x3c97,
    0x3f69, 0x3c93, 0x3f65, 0x3cb5, 0x3f66, 0x3cb0, 0x3f66, 0x3cab, 0x3f67,
    0x3ca6, 0x3f67, 0x3ca1, 0x3f68, 0x3c9c, 0x3f68, 0x3c97, 0x3f69, 0x3c93,
    0x3f6a, 0x3c8f, 0x3f6a, 0x3c8a, 0x3f6b, 0x3c86, 0x3f6b, 0x3c82, 0x3f6c,
    0x3c7d, 0x3f6c, 0x3c75, 0x3f6d, 0x3c6e, 0x3f6d, 0x3c67, 0x3f6a, 0x3c8f,
    0x3f6a, 0x3c8a, 0x3f6b, 0x3c86, 0x3f6b, 0x3c82, 0x3f6c, 0x3c7d, 0x3f6c,
    0x3c75, 0x3f6d, 0x3c6e, 0x3f6d, 0x3c67, 0x3f6e, 0x3c60, 0x3f6e, 0x3c59,
    0x3f6e, 0x3c53, 0x3f6f, 0x3c4c, 0x3f6f, 0x3c46, 0x3f70, 0x3c40, 0x3f70,
    0x3c3a, 0x3f70, 0x3c35, 0x3f6e, 0x3c60, 0x3f6e, 0x3c59, 0x3f6e, 0x3c53,
    0x3f6f, 0x3c4c, 0x3f6f, 0x3c46, 0x3f70, 0x3c40, 0x3f70, 0x3c3a, 0x3f70,
    0x3c35, 0x3f71, 0x3c2f, 0x3f71, 0x3c2a, 0x3f72, 0x3c25, 0x3f72, 0x3c20,
    0x3f72, 0x3c1b, 0x3f73, 0x3c16, 0x3f73, 0x3c12, 0x3f73, 0x3c0d, 0x3f71,
    0x3c2f, 0x3f71, 0x3c2a, 0x3f72, 0x3c25, 0x3f72, 0x3c20, 0x3f72, 0x3c1b,
    0x3f73, 0x3c16, 0x3f73, 0x3c12, 0x3f73, 0x3c0d, 0x3f74, 0x3c09, 0x3f74,
    0x3c05, 0x3f74, 0x3c01, 0x3f75, 0x3bfa, 0x3f75, 0x3bf3, 0x3f75, 0x3beb,
    0x3f75, 0x3be4, 0x3f80, 0x0000, 0x3f74, 0x3c09, 0x3f74, 0x3c05, 0x3f74,
    0x3c01, 0x3f75, 0x3bfa, 0x3f75, 0x3bf3, 0x3f75, 0x3beb, 0x3f75, 0x3be4,
    0x3f80, 0x0000};
