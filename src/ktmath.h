/*
	Auto generated code
	Author: Rahmat Ghasemi
*/

#include "variant.h"

void (*ktp_assign[12][12])(variant * , variant * , variant *);
void (*ktp_add[12][12])(variant * , variant * , variant *);
void (*ktp_mul[12][12])(variant * , variant * , variant *);
void (*ktp_sub[12][12])(variant * , variant * , variant *);
void (*ktp_div[12][12])(variant * , variant * , variant *);
void (*ktp_mod[12][12])(variant * , variant * , variant *);

void (*ktp_sqrt[12][12])(variant * , variant * , variant *);

void (*ktp_eq[12][12])(variant * , variant * , variant *);
void (*ktp_lt[12][12])(variant * , variant * , variant *);
void (*ktp_gt[12][12])(variant * , variant * , variant *);
void (*ktp_inc[12][12])(variant * , variant * , variant *);
void (*ktp_dec[12][12])(variant * , variant * , variant *);

void ktx_assign_c_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.c;
		}	
	}
}

void ktx_assign_c_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.uc;
		}	
	}
}

void ktx_assign_c_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.i;
		}	
	}
}

void ktx_assign_c_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.ui;
		}	
	}
}

void ktx_assign_c_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.li;
		}	
	}
}

void ktx_assign_c_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.uli;
		}	
	}
}

void ktx_assign_c_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.lli;
		}	
	}
}

void ktx_assign_c_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.ulli;
		}	
	}
}

void ktx_assign_c_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.f;
		}	
	}
}

void ktx_assign_c_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.d;
		}	
	}
}

void ktx_assign_c_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((char *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((char *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.c = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.c = b->data.u.ld;
		}	
	}
}

void ktx_assign_uc_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.c;
		}	
	}
}

void ktx_assign_uc_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.uc;
		}	
	}
}

void ktx_assign_uc_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.i;
		}	
	}
}

void ktx_assign_uc_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.ui;
		}	
	}
}

void ktx_assign_uc_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.li;
		}	
	}
}

void ktx_assign_uc_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.uli;
		}	
	}
}

void ktx_assign_uc_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.lli;
		}	
	}
}

void ktx_assign_uc_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.ulli;
		}	
	}
}

void ktx_assign_uc_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.f;
		}	
	}
}

void ktx_assign_uc_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.d;
		}	
	}
}

void ktx_assign_uc_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned char *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned char *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uc = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uc = b->data.u.ld;
		}	
	}
}

void ktx_assign_i_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.c;
		}	
	}
}

void ktx_assign_i_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.uc;
		}	
	}
}

void ktx_assign_i_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.i;
		}	
	}
}

void ktx_assign_i_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.ui;
		}	
	}
}

void ktx_assign_i_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.li;
		}	
	}
}

void ktx_assign_i_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.uli;
		}	
	}
}

void ktx_assign_i_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.lli;
		}	
	}
}

void ktx_assign_i_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.ulli;
		}	
	}
}

void ktx_assign_i_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.f;
		}	
	}
}

void ktx_assign_i_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.d;
		}	
	}
}

void ktx_assign_i_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((int *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((int *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.i = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.i = b->data.u.ld;
		}	
	}
}

void ktx_assign_ui_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.c;
		}	
	}
}

void ktx_assign_ui_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.uc;
		}	
	}
}

void ktx_assign_ui_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.i;
		}	
	}
}

void ktx_assign_ui_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.ui;
		}	
	}
}

void ktx_assign_ui_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.li;
		}	
	}
}

void ktx_assign_ui_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.uli;
		}	
	}
}

void ktx_assign_ui_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.lli;
		}	
	}
}

void ktx_assign_ui_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.ulli;
		}	
	}
}

void ktx_assign_ui_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.f;
		}	
	}
}

void ktx_assign_ui_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.d;
		}	
	}
}

void ktx_assign_ui_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned int *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned int *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ui = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ui = b->data.u.ld;
		}	
	}
}

void ktx_assign_li_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.c;
		}	
	}
}

void ktx_assign_li_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.uc;
		}	
	}
}

void ktx_assign_li_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.i;
		}	
	}
}

void ktx_assign_li_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.ui;
		}	
	}
}

void ktx_assign_li_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.li;
		}	
	}
}

void ktx_assign_li_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.uli;
		}	
	}
}

void ktx_assign_li_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.lli;
		}	
	}
}

void ktx_assign_li_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.ulli;
		}	
	}
}

void ktx_assign_li_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.f;
		}	
	}
}

void ktx_assign_li_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.d;
		}	
	}
}

void ktx_assign_li_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long int *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long int *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.li = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.li = b->data.u.ld;
		}	
	}
}

void ktx_assign_uli_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.c;
		}	
	}
}

void ktx_assign_uli_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.uc;
		}	
	}
}

void ktx_assign_uli_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.i;
		}	
	}
}

void ktx_assign_uli_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.ui;
		}	
	}
}

void ktx_assign_uli_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.li;
		}	
	}
}

void ktx_assign_uli_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.uli;
		}	
	}
}

void ktx_assign_uli_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.lli;
		}	
	}
}

void ktx_assign_uli_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.ulli;
		}	
	}
}

void ktx_assign_uli_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.f;
		}	
	}
}

void ktx_assign_uli_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.d;
		}	
	}
}

void ktx_assign_uli_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long int *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.uli = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.uli = b->data.u.ld;
		}	
	}
}

void ktx_assign_lli_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.c;
		}	
	}
}

void ktx_assign_lli_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.uc;
		}	
	}
}

void ktx_assign_lli_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.i;
		}	
	}
}

void ktx_assign_lli_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.ui;
		}	
	}
}

void ktx_assign_lli_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.li;
		}	
	}
}

void ktx_assign_lli_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.uli;
		}	
	}
}

void ktx_assign_lli_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.lli;
		}	
	}
}

void ktx_assign_lli_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.ulli;
		}	
	}
}

void ktx_assign_lli_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.f;
		}	
	}
}

void ktx_assign_lli_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.d;
		}	
	}
}

void ktx_assign_lli_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long long int *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long long int *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.lli = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.lli = b->data.u.ld;
		}	
	}
}

void ktx_assign_ulli_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.c;
		}	
	}
}

void ktx_assign_ulli_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.uc;
		}	
	}
}

void ktx_assign_ulli_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.i;
		}	
	}
}

void ktx_assign_ulli_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.ui;
		}	
	}
}

void ktx_assign_ulli_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.li;
		}	
	}
}

void ktx_assign_ulli_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.uli;
		}	
	}
}

void ktx_assign_ulli_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.lli;
		}	
	}
}

void ktx_assign_ulli_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.ulli;
		}	
	}
}

void ktx_assign_ulli_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.f;
		}	
	}
}

void ktx_assign_ulli_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.d;
		}	
	}
}

void ktx_assign_ulli_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((unsigned long long int *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ulli = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ulli = b->data.u.ld;
		}	
	}
}

void ktx_assign_f_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.c;
		}	
	}
}

void ktx_assign_f_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.uc;
		}	
	}
}

void ktx_assign_f_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.i;
		}	
	}
}

void ktx_assign_f_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.ui;
		}	
	}
}

void ktx_assign_f_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.li;
		}	
	}
}

void ktx_assign_f_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.uli;
		}	
	}
}

void ktx_assign_f_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.lli;
		}	
	}
}

void ktx_assign_f_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.ulli;
		}	
	}
}

void ktx_assign_f_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.f;
		}	
	}
}

void ktx_assign_f_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.d;
		}	
	}
}

void ktx_assign_f_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((float  *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((float  *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.f = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.f = b->data.u.ld;
		}	
	}
}

void ktx_assign_d_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.c;
		}	
	}
}

void ktx_assign_d_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.uc;
		}	
	}
}

void ktx_assign_d_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.i;
		}	
	}
}

void ktx_assign_d_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.ui;
		}	
	}
}

void ktx_assign_d_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.li;
		}	
	}
}

void ktx_assign_d_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.uli;
		}	
	}
}

void ktx_assign_d_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.lli;
		}	
	}
}

void ktx_assign_d_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.ulli;
		}	
	}
}

void ktx_assign_d_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.f;
		}	
	}
}

void ktx_assign_d_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.d;
		}	
	}
}

void ktx_assign_d_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((double *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((double *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.d = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.d = b->data.u.ld;
		}	
	}
}

void ktx_assign_ld_c(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.c;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.c;
		}	
	}
}

void ktx_assign_ld_uc(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.uc;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((unsigned char *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.uc;
		}	
	}
}

void ktx_assign_ld_i(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.i;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.i;
		}	
	}
}

void ktx_assign_ld_ui(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.ui;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((unsigned int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.ui;
		}	
	}
}

void ktx_assign_ld_li(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.li;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.li;
		}	
	}
}

void ktx_assign_ld_uli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.uli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((unsigned long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.uli;
		}	
	}
}

void ktx_assign_ld_lli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.lli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.lli;
		}	
	}
}

void ktx_assign_ld_ulli(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.ulli;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((unsigned long long int *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.ulli;
		}	
	}
}

void ktx_assign_ld_f(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.f;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((float  *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.f;
		}	
	}
}

void ktx_assign_ld_d(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.d;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.d;
		}	
	}
}

void ktx_assign_ld_ld(variant *a, variant *b, variant *c) {
	if (a->isArray) {
		if (b->isArray) {
			*((long double *)a->ref->data.u.a + a->offset) = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			*((long double *)a->ref->data.u.a + a->offset) = b->data.u.ld;
		}
	} else {
		if (b->isArray) {
			a->ref->data.u.ld = *((long double *)b->ref->data.u.a + b->offset) ;
		} else {
			a->ref->data.u.ld = b->data.u.ld;
		}	
	}
}

void ktx_add_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c + b->data.u.c);	
}

void ktx_add_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c + b->data.u.uc);	
}

void ktx_add_c_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c + b->data.u.i);	
}

void ktx_add_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.c + b->data.u.ui);	
}

void ktx_add_c_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.c + b->data.u.li);	
}

void ktx_add_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.c + b->data.u.uli);	
}

void ktx_add_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.c + b->data.u.lli);	
}

void ktx_add_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.c + b->data.u.ulli);	
}

void ktx_add_c_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.c + b->data.u.f);	
}

void ktx_add_c_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.c + b->data.u.d);	
}

void ktx_add_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.c + b->data.u.ld);	
}

void ktx_add_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc + b->data.u.uc);	
}

void ktx_add_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc + b->data.u.i);	
}

void ktx_add_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uc + b->data.u.ui);	
}

void ktx_add_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uc + b->data.u.li);	
}

void ktx_add_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uc + b->data.u.uli);	
}

void ktx_add_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uc + b->data.u.lli);	
}

void ktx_add_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uc + b->data.u.ulli);	
}

void ktx_add_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uc + b->data.u.f);	
}

void ktx_add_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uc + b->data.u.d);	
}

void ktx_add_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uc + b->data.u.ld);	
}

void ktx_add_i_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i + b->data.u.i);	
}

void ktx_add_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.i + b->data.u.ui);	
}

void ktx_add_i_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.i + b->data.u.li);	
}

void ktx_add_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.i + b->data.u.uli);	
}

void ktx_add_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.i + b->data.u.lli);	
}

void ktx_add_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.i + b->data.u.ulli);	
}

void ktx_add_i_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.i + b->data.u.f);	
}

void ktx_add_i_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.i + b->data.u.d);	
}

void ktx_add_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.i + b->data.u.ld);	
}

void ktx_add_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ui + b->data.u.ui);	
}

void ktx_add_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ui + b->data.u.li);	
}

void ktx_add_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ui + b->data.u.uli);	
}

void ktx_add_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ui + b->data.u.lli);	
}

void ktx_add_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ui + b->data.u.ulli);	
}

void ktx_add_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ui + b->data.u.f);	
}

void ktx_add_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ui + b->data.u.d);	
}

void ktx_add_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ui + b->data.u.ld);	
}

void ktx_add_li_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.li + b->data.u.li);	
}

void ktx_add_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.li + b->data.u.uli);	
}

void ktx_add_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.li + b->data.u.lli);	
}

void ktx_add_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.li + b->data.u.ulli);	
}

void ktx_add_li_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.li + b->data.u.f);	
}

void ktx_add_li_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.li + b->data.u.d);	
}

void ktx_add_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.li + b->data.u.ld);	
}

void ktx_add_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uli + b->data.u.uli);	
}

void ktx_add_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uli + b->data.u.lli);	
}

void ktx_add_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uli + b->data.u.ulli);	
}

void ktx_add_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uli + b->data.u.f);	
}

void ktx_add_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uli + b->data.u.d);	
}

void ktx_add_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uli + b->data.u.ld);	
}

void ktx_add_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.lli + b->data.u.lli);	
}

void ktx_add_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.lli + b->data.u.ulli);	
}

void ktx_add_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.lli + b->data.u.f);	
}

void ktx_add_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.lli + b->data.u.d);	
}

void ktx_add_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.lli + b->data.u.ld);	
}

void ktx_add_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ulli + b->data.u.ulli);	
}

void ktx_add_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ulli + b->data.u.f);	
}

void ktx_add_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ulli + b->data.u.d);	
}

void ktx_add_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ulli + b->data.u.ld);	
}

void ktx_add_f_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.f + b->data.u.f);	
}

void ktx_add_f_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.f + b->data.u.d);	
}

void ktx_add_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.f + b->data.u.ld);	
}

void ktx_add_d_d(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.d + b->data.u.d);	
}

void ktx_add_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.d + b->data.u.ld);	
}

void ktx_add_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ld + b->data.u.ld);	
}

void ktx_mul_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c * b->data.u.c);	
}

void ktx_mul_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c * b->data.u.uc);	
}

void ktx_mul_c_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c * b->data.u.i);	
}

void ktx_mul_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.c * b->data.u.ui);	
}

void ktx_mul_c_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.c * b->data.u.li);	
}

void ktx_mul_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.c * b->data.u.uli);	
}

void ktx_mul_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.c * b->data.u.lli);	
}

void ktx_mul_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.c * b->data.u.ulli);	
}

void ktx_mul_c_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.c * b->data.u.f);	
}

void ktx_mul_c_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.c * b->data.u.d);	
}

void ktx_mul_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.c * b->data.u.ld);	
}

void ktx_mul_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc * b->data.u.uc);	
}

void ktx_mul_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc * b->data.u.i);	
}

void ktx_mul_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uc * b->data.u.ui);	
}

void ktx_mul_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uc * b->data.u.li);	
}

void ktx_mul_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uc * b->data.u.uli);	
}

void ktx_mul_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uc * b->data.u.lli);	
}

void ktx_mul_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uc * b->data.u.ulli);	
}

void ktx_mul_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uc * b->data.u.f);	
}

void ktx_mul_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uc * b->data.u.d);	
}

void ktx_mul_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uc * b->data.u.ld);	
}

void ktx_mul_i_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i * b->data.u.i);	
}

void ktx_mul_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.i * b->data.u.ui);	
}

void ktx_mul_i_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.i * b->data.u.li);	
}

void ktx_mul_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.i * b->data.u.uli);	
}

void ktx_mul_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.i * b->data.u.lli);	
}

void ktx_mul_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.i * b->data.u.ulli);	
}

void ktx_mul_i_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.i * b->data.u.f);	
}

void ktx_mul_i_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.i * b->data.u.d);	
}

void ktx_mul_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.i * b->data.u.ld);	
}

void ktx_mul_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ui * b->data.u.ui);	
}

void ktx_mul_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ui * b->data.u.li);	
}

void ktx_mul_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ui * b->data.u.uli);	
}

void ktx_mul_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ui * b->data.u.lli);	
}

void ktx_mul_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ui * b->data.u.ulli);	
}

void ktx_mul_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ui * b->data.u.f);	
}

void ktx_mul_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ui * b->data.u.d);	
}

void ktx_mul_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ui * b->data.u.ld);	
}

void ktx_mul_li_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.li * b->data.u.li);	
}

void ktx_mul_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.li * b->data.u.uli);	
}

void ktx_mul_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.li * b->data.u.lli);	
}

void ktx_mul_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.li * b->data.u.ulli);	
}

void ktx_mul_li_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.li * b->data.u.f);	
}

void ktx_mul_li_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.li * b->data.u.d);	
}

void ktx_mul_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.li * b->data.u.ld);	
}

void ktx_mul_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uli * b->data.u.uli);	
}

void ktx_mul_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uli * b->data.u.lli);	
}

void ktx_mul_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uli * b->data.u.ulli);	
}

void ktx_mul_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uli * b->data.u.f);	
}

void ktx_mul_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uli * b->data.u.d);	
}

void ktx_mul_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uli * b->data.u.ld);	
}

void ktx_mul_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.lli * b->data.u.lli);	
}

void ktx_mul_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.lli * b->data.u.ulli);	
}

void ktx_mul_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.lli * b->data.u.f);	
}

void ktx_mul_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.lli * b->data.u.d);	
}

void ktx_mul_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.lli * b->data.u.ld);	
}

void ktx_mul_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ulli * b->data.u.ulli);	
}

void ktx_mul_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ulli * b->data.u.f);	
}

void ktx_mul_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ulli * b->data.u.d);	
}

void ktx_mul_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ulli * b->data.u.ld);	
}

void ktx_mul_f_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.f * b->data.u.f);	
}

void ktx_mul_f_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.f * b->data.u.d);	
}

void ktx_mul_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.f * b->data.u.ld);	
}

void ktx_mul_d_d(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.d * b->data.u.d);	
}

void ktx_mul_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.d * b->data.u.ld);	
}

void ktx_mul_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ld * b->data.u.ld);	
}

void ktx_sub_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c - b->data.u.c);	
}

void ktx_sub_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c - b->data.u.uc);	
}

void ktx_sub_c_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c - b->data.u.i);	
}

void ktx_sub_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.c - b->data.u.ui);	
}

void ktx_sub_c_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.c - b->data.u.li);	
}

void ktx_sub_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.c - b->data.u.uli);	
}

void ktx_sub_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.c - b->data.u.lli);	
}

void ktx_sub_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.c - b->data.u.ulli);	
}

void ktx_sub_c_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.c - b->data.u.f);	
}

void ktx_sub_c_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.c - b->data.u.d);	
}

void ktx_sub_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.c - b->data.u.ld);	
}

void ktx_sub_uc_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc - b->data.u.c);	
}

void ktx_sub_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc - b->data.u.uc);	
}

void ktx_sub_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc - b->data.u.i);	
}

void ktx_sub_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uc - b->data.u.ui);	
}

void ktx_sub_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uc - b->data.u.li);	
}

void ktx_sub_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uc - b->data.u.uli);	
}

void ktx_sub_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uc - b->data.u.lli);	
}

void ktx_sub_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uc - b->data.u.ulli);	
}

void ktx_sub_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uc - b->data.u.f);	
}

void ktx_sub_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uc - b->data.u.d);	
}

void ktx_sub_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uc - b->data.u.ld);	
}

void ktx_sub_i_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.i - b->data.u.c);	
}

void ktx_sub_i_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.i - b->data.u.uc);	
}

void ktx_sub_i_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i - b->data.u.i);	
}

void ktx_sub_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.i - b->data.u.ui);	
}

void ktx_sub_i_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.i - b->data.u.li);	
}

void ktx_sub_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.i - b->data.u.uli);	
}

void ktx_sub_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.i - b->data.u.lli);	
}

void ktx_sub_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.i - b->data.u.ulli);	
}

void ktx_sub_i_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.i - b->data.u.f);	
}

void ktx_sub_i_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.i - b->data.u.d);	
}

void ktx_sub_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.i - b->data.u.ld);	
}

void ktx_sub_ui_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ui - b->data.u.c);	
}

void ktx_sub_ui_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ui - b->data.u.uc);	
}

void ktx_sub_ui_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui - b->data.u.i);	
}

void ktx_sub_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ui - b->data.u.ui);	
}

void ktx_sub_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ui - b->data.u.li);	
}

void ktx_sub_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ui - b->data.u.uli);	
}

void ktx_sub_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ui - b->data.u.lli);	
}

void ktx_sub_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ui - b->data.u.ulli);	
}

void ktx_sub_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ui - b->data.u.f);	
}

void ktx_sub_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ui - b->data.u.d);	
}

void ktx_sub_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ui - b->data.u.ld);	
}

void ktx_sub_li_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.li - b->data.u.c);	
}

void ktx_sub_li_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.li - b->data.u.uc);	
}

void ktx_sub_li_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li - b->data.u.i);	
}

void ktx_sub_li_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.li - b->data.u.ui);	
}

void ktx_sub_li_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.li - b->data.u.li);	
}

void ktx_sub_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.li - b->data.u.uli);	
}

void ktx_sub_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.li - b->data.u.lli);	
}

void ktx_sub_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.li - b->data.u.ulli);	
}

void ktx_sub_li_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.li - b->data.u.f);	
}

void ktx_sub_li_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.li - b->data.u.d);	
}

void ktx_sub_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.li - b->data.u.ld);	
}

void ktx_sub_uli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.uli - b->data.u.c);	
}

void ktx_sub_uli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.uli - b->data.u.uc);	
}

void ktx_sub_uli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli - b->data.u.i);	
}

void ktx_sub_uli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uli - b->data.u.ui);	
}

void ktx_sub_uli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uli - b->data.u.li);	
}

void ktx_sub_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uli - b->data.u.uli);	
}

void ktx_sub_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uli - b->data.u.lli);	
}

void ktx_sub_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uli - b->data.u.ulli);	
}

void ktx_sub_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uli - b->data.u.f);	
}

void ktx_sub_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uli - b->data.u.d);	
}

void ktx_sub_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uli - b->data.u.ld);	
}

void ktx_sub_lli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.lli - b->data.u.c);	
}

void ktx_sub_lli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.lli - b->data.u.uc);	
}

void ktx_sub_lli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli - b->data.u.i);	
}

void ktx_sub_lli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.lli - b->data.u.ui);	
}

void ktx_sub_lli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.lli - b->data.u.li);	
}

void ktx_sub_lli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.lli - b->data.u.uli);	
}

void ktx_sub_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.lli - b->data.u.lli);	
}

void ktx_sub_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.lli - b->data.u.ulli);	
}

void ktx_sub_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.lli - b->data.u.f);	
}

void ktx_sub_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.lli - b->data.u.d);	
}

void ktx_sub_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.lli - b->data.u.ld);	
}

void ktx_sub_ulli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ulli - b->data.u.c);	
}

void ktx_sub_ulli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ulli - b->data.u.uc);	
}

void ktx_sub_ulli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli - b->data.u.i);	
}

void ktx_sub_ulli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ulli - b->data.u.ui);	
}

void ktx_sub_ulli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ulli - b->data.u.li);	
}

void ktx_sub_ulli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ulli - b->data.u.uli);	
}

void ktx_sub_ulli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ulli - b->data.u.lli);	
}

void ktx_sub_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ulli - b->data.u.ulli);	
}

void ktx_sub_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ulli - b->data.u.f);	
}

void ktx_sub_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ulli - b->data.u.d);	
}

void ktx_sub_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ulli - b->data.u.ld);	
}

void ktx_sub_f_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.f - b->data.u.c);	
}

void ktx_sub_f_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.f - b->data.u.uc);	
}

void ktx_sub_f_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f - b->data.u.i);	
}

void ktx_sub_f_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.f - b->data.u.ui);	
}

void ktx_sub_f_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.f - b->data.u.li);	
}

void ktx_sub_f_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.f - b->data.u.uli);	
}

void ktx_sub_f_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.f - b->data.u.lli);	
}

void ktx_sub_f_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.f - b->data.u.ulli);	
}

void ktx_sub_f_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.f - b->data.u.f);	
}

void ktx_sub_f_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.f - b->data.u.d);	
}

void ktx_sub_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.f - b->data.u.ld);	
}

void ktx_sub_d_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.d - b->data.u.c);	
}

void ktx_sub_d_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.d - b->data.u.uc);	
}

void ktx_sub_d_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d - b->data.u.i);	
}

void ktx_sub_d_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.d - b->data.u.ui);	
}

void ktx_sub_d_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.d - b->data.u.li);	
}

void ktx_sub_d_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.d - b->data.u.uli);	
}

void ktx_sub_d_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.d - b->data.u.lli);	
}

void ktx_sub_d_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.d - b->data.u.ulli);	
}

void ktx_sub_d_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.d - b->data.u.f);	
}

void ktx_sub_d_d(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.d - b->data.u.d);	
}

void ktx_sub_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.d - b->data.u.ld);	
}

void ktx_sub_ld_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ld - b->data.u.c);	
}

void ktx_sub_ld_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ld - b->data.u.uc);	
}

void ktx_sub_ld_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld - b->data.u.i);	
}

void ktx_sub_ld_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ld - b->data.u.ui);	
}

void ktx_sub_ld_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ld - b->data.u.li);	
}

void ktx_sub_ld_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ld - b->data.u.uli);	
}

void ktx_sub_ld_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ld - b->data.u.lli);	
}

void ktx_sub_ld_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ld - b->data.u.ulli);	
}

void ktx_sub_ld_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ld - b->data.u.f);	
}

void ktx_sub_ld_d(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ld - b->data.u.d);	
}

void ktx_sub_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ld - b->data.u.ld);	
}

void ktx_div_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c / b->data.u.c);	
}

void ktx_div_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c / b->data.u.uc);	
}

void ktx_div_c_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c / b->data.u.i);	
}

void ktx_div_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.c / b->data.u.ui);	
}

void ktx_div_c_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.c / b->data.u.li);	
}

void ktx_div_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.c / b->data.u.uli);	
}

void ktx_div_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.c / b->data.u.lli);	
}

void ktx_div_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.c / b->data.u.ulli);	
}

void ktx_div_c_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.c / b->data.u.f);	
}

void ktx_div_c_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.c / b->data.u.d);	
}

void ktx_div_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.c / b->data.u.ld);	
}

void ktx_div_uc_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc / b->data.u.c);	
}

void ktx_div_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc / b->data.u.uc);	
}

void ktx_div_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc / b->data.u.i);	
}

void ktx_div_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uc / b->data.u.ui);	
}

void ktx_div_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uc / b->data.u.li);	
}

void ktx_div_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uc / b->data.u.uli);	
}

void ktx_div_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uc / b->data.u.lli);	
}

void ktx_div_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uc / b->data.u.ulli);	
}

void ktx_div_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uc / b->data.u.f);	
}

void ktx_div_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uc / b->data.u.d);	
}

void ktx_div_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uc / b->data.u.ld);	
}

void ktx_div_i_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.i / b->data.u.c);	
}

void ktx_div_i_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.i / b->data.u.uc);	
}

void ktx_div_i_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i / b->data.u.i);	
}

void ktx_div_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.i / b->data.u.ui);	
}

void ktx_div_i_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.i / b->data.u.li);	
}

void ktx_div_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.i / b->data.u.uli);	
}

void ktx_div_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.i / b->data.u.lli);	
}

void ktx_div_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.i / b->data.u.ulli);	
}

void ktx_div_i_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.i / b->data.u.f);	
}

void ktx_div_i_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.i / b->data.u.d);	
}

void ktx_div_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.i / b->data.u.ld);	
}

void ktx_div_ui_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ui / b->data.u.c);	
}

void ktx_div_ui_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ui / b->data.u.uc);	
}

void ktx_div_ui_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui / b->data.u.i);	
}

void ktx_div_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ui / b->data.u.ui);	
}

void ktx_div_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ui / b->data.u.li);	
}

void ktx_div_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ui / b->data.u.uli);	
}

void ktx_div_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ui / b->data.u.lli);	
}

void ktx_div_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ui / b->data.u.ulli);	
}

void ktx_div_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ui / b->data.u.f);	
}

void ktx_div_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ui / b->data.u.d);	
}

void ktx_div_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ui / b->data.u.ld);	
}

void ktx_div_li_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.li / b->data.u.c);	
}

void ktx_div_li_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.li / b->data.u.uc);	
}

void ktx_div_li_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li / b->data.u.i);	
}

void ktx_div_li_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.li / b->data.u.ui);	
}

void ktx_div_li_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.li / b->data.u.li);	
}

void ktx_div_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.li / b->data.u.uli);	
}

void ktx_div_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.li / b->data.u.lli);	
}

void ktx_div_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.li / b->data.u.ulli);	
}

void ktx_div_li_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.li / b->data.u.f);	
}

void ktx_div_li_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.li / b->data.u.d);	
}

void ktx_div_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.li / b->data.u.ld);	
}

void ktx_div_uli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.uli / b->data.u.c);	
}

void ktx_div_uli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.uli / b->data.u.uc);	
}

void ktx_div_uli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli / b->data.u.i);	
}

void ktx_div_uli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uli / b->data.u.ui);	
}

void ktx_div_uli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uli / b->data.u.li);	
}

void ktx_div_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uli / b->data.u.uli);	
}

void ktx_div_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uli / b->data.u.lli);	
}

void ktx_div_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uli / b->data.u.ulli);	
}

void ktx_div_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.uli / b->data.u.f);	
}

void ktx_div_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.uli / b->data.u.d);	
}

void ktx_div_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.uli / b->data.u.ld);	
}

void ktx_div_lli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.lli / b->data.u.c);	
}

void ktx_div_lli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.lli / b->data.u.uc);	
}

void ktx_div_lli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli / b->data.u.i);	
}

void ktx_div_lli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.lli / b->data.u.ui);	
}

void ktx_div_lli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.lli / b->data.u.li);	
}

void ktx_div_lli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.lli / b->data.u.uli);	
}

void ktx_div_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.lli / b->data.u.lli);	
}

void ktx_div_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.lli / b->data.u.ulli);	
}

void ktx_div_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.lli / b->data.u.f);	
}

void ktx_div_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.lli / b->data.u.d);	
}

void ktx_div_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.lli / b->data.u.ld);	
}

void ktx_div_ulli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ulli / b->data.u.c);	
}

void ktx_div_ulli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ulli / b->data.u.uc);	
}

void ktx_div_ulli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli / b->data.u.i);	
}

void ktx_div_ulli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ulli / b->data.u.ui);	
}

void ktx_div_ulli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ulli / b->data.u.li);	
}

void ktx_div_ulli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ulli / b->data.u.uli);	
}

void ktx_div_ulli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ulli / b->data.u.lli);	
}

void ktx_div_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ulli / b->data.u.ulli);	
}

void ktx_div_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ulli / b->data.u.f);	
}

void ktx_div_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ulli / b->data.u.d);	
}

void ktx_div_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ulli / b->data.u.ld);	
}

void ktx_div_f_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.f / b->data.u.c);	
}

void ktx_div_f_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.f / b->data.u.uc);	
}

void ktx_div_f_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f / b->data.u.i);	
}

void ktx_div_f_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.f / b->data.u.ui);	
}

void ktx_div_f_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.f / b->data.u.li);	
}

void ktx_div_f_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.f / b->data.u.uli);	
}

void ktx_div_f_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.f / b->data.u.lli);	
}

void ktx_div_f_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.f / b->data.u.ulli);	
}

void ktx_div_f_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.f / b->data.u.f);	
}

void ktx_div_f_d(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.f / b->data.u.d);	
}

void ktx_div_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.f / b->data.u.ld);	
}

void ktx_div_d_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.d / b->data.u.c);	
}

void ktx_div_d_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.d / b->data.u.uc);	
}

void ktx_div_d_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d / b->data.u.i);	
}

void ktx_div_d_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.d / b->data.u.ui);	
}

void ktx_div_d_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.d / b->data.u.li);	
}

void ktx_div_d_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.d / b->data.u.uli);	
}

void ktx_div_d_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.d / b->data.u.lli);	
}

void ktx_div_d_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.d / b->data.u.ulli);	
}

void ktx_div_d_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.d / b->data.u.f);	
}

void ktx_div_d_d(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.d / b->data.u.d);	
}

void ktx_div_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.d / b->data.u.ld);	
}

void ktx_div_ld_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ld / b->data.u.c);	
}

void ktx_div_ld_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ld / b->data.u.uc);	
}

void ktx_div_ld_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld / b->data.u.i);	
}

void ktx_div_ld_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ld / b->data.u.ui);	
}

void ktx_div_ld_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ld / b->data.u.li);	
}

void ktx_div_ld_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ld / b->data.u.uli);	
}

void ktx_div_ld_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ld / b->data.u.lli);	
}

void ktx_div_ld_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ld / b->data.u.ulli);	
}

void ktx_div_ld_f(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.f =  (a->data.u.ld / b->data.u.f);	
}

void ktx_div_ld_d(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.d =  (a->data.u.ld / b->data.u.d);	
}

void ktx_div_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ld =  (a->data.u.ld / b->data.u.ld);	
}

void ktx_mod_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c % b->data.u.c);	
}

void ktx_mod_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c % b->data.u.uc);	
}

void ktx_mod_c_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c % b->data.u.i);	
}

void ktx_mod_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.c % b->data.u.ui);	
}

void ktx_mod_c_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.c % b->data.u.li);	
}

void ktx_mod_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.c % b->data.u.uli);	
}

void ktx_mod_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.c % b->data.u.lli);	
}

void ktx_mod_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.c % b->data.u.ulli);	
}

void ktx_mod_uc_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc % b->data.u.c);	
}

void ktx_mod_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc % b->data.u.uc);	
}

void ktx_mod_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc % b->data.u.i);	
}

void ktx_mod_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uc % b->data.u.ui);	
}

void ktx_mod_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uc % b->data.u.li);	
}

void ktx_mod_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uc % b->data.u.uli);	
}

void ktx_mod_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uc % b->data.u.lli);	
}

void ktx_mod_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uc % b->data.u.ulli);	
}

void ktx_mod_i_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.i % b->data.u.c);	
}

void ktx_mod_i_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.i % b->data.u.uc);	
}

void ktx_mod_i_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i % b->data.u.i);	
}

void ktx_mod_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.i % b->data.u.ui);	
}

void ktx_mod_i_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.i % b->data.u.li);	
}

void ktx_mod_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.i % b->data.u.uli);	
}

void ktx_mod_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.i % b->data.u.lli);	
}

void ktx_mod_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.i % b->data.u.ulli);	
}

void ktx_mod_ui_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ui % b->data.u.c);	
}

void ktx_mod_ui_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ui % b->data.u.uc);	
}

void ktx_mod_ui_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui % b->data.u.i);	
}

void ktx_mod_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ui % b->data.u.ui);	
}

void ktx_mod_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ui % b->data.u.li);	
}

void ktx_mod_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ui % b->data.u.uli);	
}

void ktx_mod_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ui % b->data.u.lli);	
}

void ktx_mod_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ui % b->data.u.ulli);	
}

void ktx_mod_li_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.li % b->data.u.c);	
}

void ktx_mod_li_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.li % b->data.u.uc);	
}

void ktx_mod_li_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li % b->data.u.i);	
}

void ktx_mod_li_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.li % b->data.u.ui);	
}

void ktx_mod_li_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.li % b->data.u.li);	
}

void ktx_mod_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.li % b->data.u.uli);	
}

void ktx_mod_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.li % b->data.u.lli);	
}

void ktx_mod_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.li % b->data.u.ulli);	
}

void ktx_mod_uli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.uli % b->data.u.c);	
}

void ktx_mod_uli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.uli % b->data.u.uc);	
}

void ktx_mod_uli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli % b->data.u.i);	
}

void ktx_mod_uli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.uli % b->data.u.ui);	
}

void ktx_mod_uli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.uli % b->data.u.li);	
}

void ktx_mod_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.uli % b->data.u.uli);	
}

void ktx_mod_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.uli % b->data.u.lli);	
}

void ktx_mod_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.uli % b->data.u.ulli);	
}

void ktx_mod_lli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.lli % b->data.u.c);	
}

void ktx_mod_lli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.lli % b->data.u.uc);	
}

void ktx_mod_lli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli % b->data.u.i);	
}

void ktx_mod_lli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.lli % b->data.u.ui);	
}

void ktx_mod_lli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.lli % b->data.u.li);	
}

void ktx_mod_lli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.lli % b->data.u.uli);	
}

void ktx_mod_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.lli % b->data.u.lli);	
}

void ktx_mod_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, b->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.lli % b->data.u.ulli);	
}

void ktx_mod_ulli_c(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.c =  (a->data.u.ulli % b->data.u.c);	
}

void ktx_mod_ulli_uc(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uc =  (a->data.u.ulli % b->data.u.uc);	
}

void ktx_mod_ulli_i(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli % b->data.u.i);	
}

void ktx_mod_ulli_ui(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ui =  (a->data.u.ulli % b->data.u.ui);	
}

void ktx_mod_ulli_li(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.li =  (a->data.u.ulli % b->data.u.li);	
}

void ktx_mod_ulli_uli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.uli =  (a->data.u.ulli % b->data.u.uli);	
}

void ktx_mod_ulli_lli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.lli =  (a->data.u.ulli % b->data.u.lli);	
}

void ktx_mod_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, a->dt , 1);			
	realloc_var( c, 1);
	
	c->data.u.ulli =  (a->data.u.ulli % b->data.u.ulli);	
}

void ktx_eq_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.c);	
}

void ktx_eq_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.uc);	
}

void ktx_eq_c_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.i);	
}

void ktx_eq_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.ui);	
}

void ktx_eq_c_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.li);	
}

void ktx_eq_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.uli);	
}

void ktx_eq_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.lli);	
}

void ktx_eq_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.ulli);	
}

void ktx_eq_c_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.f);	
}

void ktx_eq_c_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.d);	
}

void ktx_eq_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c == b->data.u.ld);	
}

void ktx_eq_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.uc);	
}

void ktx_eq_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.i);	
}

void ktx_eq_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.ui);	
}

void ktx_eq_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.li);	
}

void ktx_eq_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.uli);	
}

void ktx_eq_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.lli);	
}

void ktx_eq_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.ulli);	
}

void ktx_eq_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.f);	
}

void ktx_eq_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.d);	
}

void ktx_eq_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc == b->data.u.ld);	
}

void ktx_eq_i_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.i);	
}

void ktx_eq_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.ui);	
}

void ktx_eq_i_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.li);	
}

void ktx_eq_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.uli);	
}

void ktx_eq_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.lli);	
}

void ktx_eq_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.ulli);	
}

void ktx_eq_i_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.f);	
}

void ktx_eq_i_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.d);	
}

void ktx_eq_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i == b->data.u.ld);	
}

void ktx_eq_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.ui);	
}

void ktx_eq_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.li);	
}

void ktx_eq_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.uli);	
}

void ktx_eq_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.lli);	
}

void ktx_eq_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.ulli);	
}

void ktx_eq_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.f);	
}

void ktx_eq_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.d);	
}

void ktx_eq_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui == b->data.u.ld);	
}

void ktx_eq_li_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.li);	
}

void ktx_eq_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.uli);	
}

void ktx_eq_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.lli);	
}

void ktx_eq_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.ulli);	
}

void ktx_eq_li_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.f);	
}

void ktx_eq_li_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.d);	
}

void ktx_eq_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li == b->data.u.ld);	
}

void ktx_eq_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli == b->data.u.uli);	
}

void ktx_eq_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli == b->data.u.lli);	
}

void ktx_eq_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli == b->data.u.ulli);	
}

void ktx_eq_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli == b->data.u.f);	
}

void ktx_eq_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli == b->data.u.d);	
}

void ktx_eq_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli == b->data.u.ld);	
}

void ktx_eq_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli == b->data.u.lli);	
}

void ktx_eq_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli == b->data.u.ulli);	
}

void ktx_eq_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli == b->data.u.f);	
}

void ktx_eq_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli == b->data.u.d);	
}

void ktx_eq_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli == b->data.u.ld);	
}

void ktx_eq_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli == b->data.u.ulli);	
}

void ktx_eq_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli == b->data.u.f);	
}

void ktx_eq_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli == b->data.u.d);	
}

void ktx_eq_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli == b->data.u.ld);	
}

void ktx_eq_f_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f == b->data.u.f);	
}

void ktx_eq_f_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f == b->data.u.d);	
}

void ktx_eq_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f == b->data.u.ld);	
}

void ktx_eq_d_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d == b->data.u.d);	
}

void ktx_eq_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d == b->data.u.ld);	
}

void ktx_eq_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld == b->data.u.ld);	
}

void ktx_lt_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.c);	
}

void ktx_lt_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.uc);	
}

void ktx_lt_c_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.i);	
}

void ktx_lt_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.ui);	
}

void ktx_lt_c_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.li);	
}

void ktx_lt_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.uli);	
}

void ktx_lt_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.lli);	
}

void ktx_lt_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.ulli);	
}

void ktx_lt_c_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.f);	
}

void ktx_lt_c_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.d);	
}

void ktx_lt_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c < b->data.u.ld);	
}

void ktx_lt_uc_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.c);	
}

void ktx_lt_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.uc);	
}

void ktx_lt_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.i);	
}

void ktx_lt_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.ui);	
}

void ktx_lt_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.li);	
}

void ktx_lt_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.uli);	
}

void ktx_lt_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.lli);	
}

void ktx_lt_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.ulli);	
}

void ktx_lt_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.f);	
}

void ktx_lt_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.d);	
}

void ktx_lt_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc < b->data.u.ld);	
}

void ktx_lt_i_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.c);	
}

void ktx_lt_i_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.uc);	
}

void ktx_lt_i_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.i);	
}

void ktx_lt_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.ui);	
}

void ktx_lt_i_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.li);	
}

void ktx_lt_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.uli);	
}

void ktx_lt_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.lli);	
}

void ktx_lt_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.ulli);	
}

void ktx_lt_i_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.f);	
}

void ktx_lt_i_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.d);	
}

void ktx_lt_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i < b->data.u.ld);	
}

void ktx_lt_ui_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.c);	
}

void ktx_lt_ui_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.uc);	
}

void ktx_lt_ui_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.i);	
}

void ktx_lt_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.ui);	
}

void ktx_lt_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.li);	
}

void ktx_lt_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.uli);	
}

void ktx_lt_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.lli);	
}

void ktx_lt_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.ulli);	
}

void ktx_lt_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.f);	
}

void ktx_lt_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.d);	
}

void ktx_lt_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui < b->data.u.ld);	
}

void ktx_lt_li_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.c);	
}

void ktx_lt_li_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.uc);	
}

void ktx_lt_li_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.i);	
}

void ktx_lt_li_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.ui);	
}

void ktx_lt_li_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.li);	
}

void ktx_lt_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.uli);	
}

void ktx_lt_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.lli);	
}

void ktx_lt_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.ulli);	
}

void ktx_lt_li_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.f);	
}

void ktx_lt_li_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.d);	
}

void ktx_lt_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li < b->data.u.ld);	
}

void ktx_lt_uli_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.c);	
}

void ktx_lt_uli_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.uc);	
}

void ktx_lt_uli_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.i);	
}

void ktx_lt_uli_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.ui);	
}

void ktx_lt_uli_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.li);	
}

void ktx_lt_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.uli);	
}

void ktx_lt_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.lli);	
}

void ktx_lt_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.ulli);	
}

void ktx_lt_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.f);	
}

void ktx_lt_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.d);	
}

void ktx_lt_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli < b->data.u.ld);	
}

void ktx_lt_lli_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.c);	
}

void ktx_lt_lli_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.uc);	
}

void ktx_lt_lli_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.i);	
}

void ktx_lt_lli_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.ui);	
}

void ktx_lt_lli_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.li);	
}

void ktx_lt_lli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.uli);	
}

void ktx_lt_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.lli);	
}

void ktx_lt_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.ulli);	
}

void ktx_lt_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.f);	
}

void ktx_lt_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.d);	
}

void ktx_lt_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli < b->data.u.ld);	
}

void ktx_lt_ulli_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.c);	
}

void ktx_lt_ulli_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.uc);	
}

void ktx_lt_ulli_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.i);	
}

void ktx_lt_ulli_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.ui);	
}

void ktx_lt_ulli_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.li);	
}

void ktx_lt_ulli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.uli);	
}

void ktx_lt_ulli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.lli);	
}

void ktx_lt_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.ulli);	
}

void ktx_lt_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.f);	
}

void ktx_lt_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.d);	
}

void ktx_lt_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli < b->data.u.ld);	
}

void ktx_lt_f_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.c);	
}

void ktx_lt_f_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.uc);	
}

void ktx_lt_f_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.i);	
}

void ktx_lt_f_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.ui);	
}

void ktx_lt_f_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.li);	
}

void ktx_lt_f_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.uli);	
}

void ktx_lt_f_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.lli);	
}

void ktx_lt_f_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.ulli);	
}

void ktx_lt_f_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.f);	
}

void ktx_lt_f_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.d);	
}

void ktx_lt_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f < b->data.u.ld);	
}

void ktx_lt_d_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.c);	
}

void ktx_lt_d_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.uc);	
}

void ktx_lt_d_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.i);	
}

void ktx_lt_d_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.ui);	
}

void ktx_lt_d_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.li);	
}

void ktx_lt_d_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.uli);	
}

void ktx_lt_d_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.lli);	
}

void ktx_lt_d_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.ulli);	
}

void ktx_lt_d_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.f);	
}

void ktx_lt_d_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.d);	
}

void ktx_lt_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d < b->data.u.ld);	
}

void ktx_lt_ld_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.c);	
}

void ktx_lt_ld_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.uc);	
}

void ktx_lt_ld_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.i);	
}

void ktx_lt_ld_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.ui);	
}

void ktx_lt_ld_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.li);	
}

void ktx_lt_ld_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.uli);	
}

void ktx_lt_ld_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.lli);	
}

void ktx_lt_ld_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.ulli);	
}

void ktx_lt_ld_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.f);	
}

void ktx_lt_ld_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.d);	
}

void ktx_lt_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld < b->data.u.ld);	
}

void ktx_gt_c_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.c);	
}

void ktx_gt_c_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.uc);	
}

void ktx_gt_c_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.i);	
}

void ktx_gt_c_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.ui);	
}

void ktx_gt_c_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.li);	
}

void ktx_gt_c_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.uli);	
}

void ktx_gt_c_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.lli);	
}

void ktx_gt_c_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.ulli);	
}

void ktx_gt_c_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.f);	
}

void ktx_gt_c_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.d);	
}

void ktx_gt_c_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.c > b->data.u.ld);	
}

void ktx_gt_uc_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.c);	
}

void ktx_gt_uc_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.uc);	
}

void ktx_gt_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.i);	
}

void ktx_gt_uc_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.ui);	
}

void ktx_gt_uc_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.li);	
}

void ktx_gt_uc_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.uli);	
}

void ktx_gt_uc_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.lli);	
}

void ktx_gt_uc_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.ulli);	
}

void ktx_gt_uc_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.f);	
}

void ktx_gt_uc_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.d);	
}

void ktx_gt_uc_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uc > b->data.u.ld);	
}

void ktx_gt_i_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.c);	
}

void ktx_gt_i_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.uc);	
}

void ktx_gt_i_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.i);	
}

void ktx_gt_i_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.ui);	
}

void ktx_gt_i_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.li);	
}

void ktx_gt_i_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.uli);	
}

void ktx_gt_i_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.lli);	
}

void ktx_gt_i_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.ulli);	
}

void ktx_gt_i_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.f);	
}

void ktx_gt_i_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.d);	
}

void ktx_gt_i_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.i > b->data.u.ld);	
}

void ktx_gt_ui_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.c);	
}

void ktx_gt_ui_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.uc);	
}

void ktx_gt_ui_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.i);	
}

void ktx_gt_ui_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.ui);	
}

void ktx_gt_ui_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.li);	
}

void ktx_gt_ui_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.uli);	
}

void ktx_gt_ui_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.lli);	
}

void ktx_gt_ui_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.ulli);	
}

void ktx_gt_ui_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.f);	
}

void ktx_gt_ui_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.d);	
}

void ktx_gt_ui_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ui > b->data.u.ld);	
}

void ktx_gt_li_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.c);	
}

void ktx_gt_li_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.uc);	
}

void ktx_gt_li_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.i);	
}

void ktx_gt_li_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.ui);	
}

void ktx_gt_li_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.li);	
}

void ktx_gt_li_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.uli);	
}

void ktx_gt_li_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.lli);	
}

void ktx_gt_li_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.ulli);	
}

void ktx_gt_li_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.f);	
}

void ktx_gt_li_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.d);	
}

void ktx_gt_li_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.li > b->data.u.ld);	
}

void ktx_gt_uli_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.c);	
}

void ktx_gt_uli_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.uc);	
}

void ktx_gt_uli_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.i);	
}

void ktx_gt_uli_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.ui);	
}

void ktx_gt_uli_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.li);	
}

void ktx_gt_uli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.uli);	
}

void ktx_gt_uli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.lli);	
}

void ktx_gt_uli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.ulli);	
}

void ktx_gt_uli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.f);	
}

void ktx_gt_uli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.d);	
}

void ktx_gt_uli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.uli > b->data.u.ld);	
}

void ktx_gt_lli_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.c);	
}

void ktx_gt_lli_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.uc);	
}

void ktx_gt_lli_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.i);	
}

void ktx_gt_lli_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.ui);	
}

void ktx_gt_lli_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.li);	
}

void ktx_gt_lli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.uli);	
}

void ktx_gt_lli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.lli);	
}

void ktx_gt_lli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.ulli);	
}

void ktx_gt_lli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.f);	
}

void ktx_gt_lli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.d);	
}

void ktx_gt_lli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.lli > b->data.u.ld);	
}

void ktx_gt_ulli_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.c);	
}

void ktx_gt_ulli_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.uc);	
}

void ktx_gt_ulli_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.i);	
}

void ktx_gt_ulli_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.ui);	
}

void ktx_gt_ulli_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.li);	
}

void ktx_gt_ulli_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.uli);	
}

void ktx_gt_ulli_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.lli);	
}

void ktx_gt_ulli_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.ulli);	
}

void ktx_gt_ulli_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.f);	
}

void ktx_gt_ulli_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.d);	
}

void ktx_gt_ulli_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ulli > b->data.u.ld);	
}

void ktx_gt_f_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.c);	
}

void ktx_gt_f_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.uc);	
}

void ktx_gt_f_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.i);	
}

void ktx_gt_f_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.ui);	
}

void ktx_gt_f_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.li);	
}

void ktx_gt_f_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.uli);	
}

void ktx_gt_f_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.lli);	
}

void ktx_gt_f_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.ulli);	
}

void ktx_gt_f_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.f);	
}

void ktx_gt_f_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.d);	
}

void ktx_gt_f_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.f > b->data.u.ld);	
}

void ktx_gt_d_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.c);	
}

void ktx_gt_d_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.uc);	
}

void ktx_gt_d_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.i);	
}

void ktx_gt_d_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.ui);	
}

void ktx_gt_d_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.li);	
}

void ktx_gt_d_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.uli);	
}

void ktx_gt_d_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.lli);	
}

void ktx_gt_d_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.ulli);	
}

void ktx_gt_d_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.f);	
}

void ktx_gt_d_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.d);	
}

void ktx_gt_d_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.d > b->data.u.ld);	
}

void ktx_gt_ld_c(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.c);	
}

void ktx_gt_ld_uc(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.uc);	
}

void ktx_gt_ld_i(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.i);	
}

void ktx_gt_ld_ui(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.ui);	
}

void ktx_gt_ld_li(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.li);	
}

void ktx_gt_ld_uli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.uli);	
}

void ktx_gt_ld_lli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.lli);	
}

void ktx_gt_ld_ulli(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.ulli);	
}

void ktx_gt_ld_f(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.f);	
}

void ktx_gt_ld_d(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.d);	
}

void ktx_gt_ld_ld(variant *a, variant *b, variant *c) {
	init_var( c, INT , 1);			
	realloc_var( c, 1);
	
	c->data.u.i =  (a->data.u.ld > b->data.u.ld);	
}

void ktx_inc_c_i(variant *a, variant *b, variant *c) {
	a->data.u.c ++;
}

void ktx_inc_uc_i(variant *a, variant *b, variant *c) {
	a->data.u.uc ++;
}

void ktx_inc_i_i(variant *a, variant *b, variant *c) {
	a->data.u.i ++;
}

void ktx_inc_ui_i(variant *a, variant *b, variant *c) {
	a->data.u.ui ++;
}

void ktx_inc_li_i(variant *a, variant *b, variant *c) {
	a->data.u.li ++;
}

void ktx_inc_uli_i(variant *a, variant *b, variant *c) {
	a->data.u.uli ++;
}

void ktx_inc_lli_i(variant *a, variant *b, variant *c) {
	a->data.u.lli ++;
}

void ktx_inc_ulli_i(variant *a, variant *b, variant *c) {
	a->data.u.ulli ++;
}

void ktx_inc_f_i(variant *a, variant *b, variant *c) {
	a->data.u.f ++;
}

void ktx_inc_d_i(variant *a, variant *b, variant *c) {
	a->data.u.d ++;
}

void ktx_inc_ld_i(variant *a, variant *b, variant *c) {
	a->data.u.ld ++;
}

void ktx_dec_c_i(variant *a, variant *b, variant *c) {
	a->data.u.c --;
}

void ktx_dec_uc_i(variant *a, variant *b, variant *c) {
	a->data.u.uc --;
}

void ktx_dec_i_i(variant *a, variant *b, variant *c) {
	a->data.u.i --;
}

void ktx_dec_ui_i(variant *a, variant *b, variant *c) {
	a->data.u.ui --;
}

void ktx_dec_li_i(variant *a, variant *b, variant *c) {
	a->data.u.li --;
}

void ktx_dec_uli_i(variant *a, variant *b, variant *c) {
	a->data.u.uli --;
}

void ktx_dec_lli_i(variant *a, variant *b, variant *c) {
	a->data.u.lli --;
}

void ktx_dec_ulli_i(variant *a, variant *b, variant *c) {
	a->data.u.ulli --;
}

void ktx_dec_f_i(variant *a, variant *b, variant *c) {
	a->data.u.f --;
}

void ktx_dec_d_i(variant *a, variant *b, variant *c) {
	a->data.u.d --;
}

void ktx_dec_ld_i(variant *a, variant *b, variant *c) {
	a->data.u.ld --;
}

void ktx_sqrt_c_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.c > 0) {
	  c->data.u.d=sqrt(a->data.u.c);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_uc_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.uc > 0) {
	  c->data.u.d=sqrt(a->data.u.uc);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_i_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.i > 0) {
	  c->data.u.d=sqrt(a->data.u.i);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_ui_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.ui > 0) {
	  c->data.u.d=sqrt(a->data.u.ui);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_li_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.li > 0) {
	  c->data.u.d=sqrt(a->data.u.li);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_uli_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.uli > 0) {
	  c->data.u.d=sqrt(a->data.u.uli);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_lli_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.lli > 0) {
	  c->data.u.d=sqrt(a->data.u.lli);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_ulli_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.ulli > 0) {
	  c->data.u.d=sqrt(a->data.u.ulli);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_f_i(variant *a, variant *b, variant *c) {
	init_var( c, FLOAT , 1);			
	realloc_var( c, 1);
	if (a->data.u.f > 0) {
	  c->data.u.f=sqrtf(a->data.u.f);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_d_i(variant *a, variant *b, variant *c) {
	init_var( c, DOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.d > 0) {
	  c->data.u.d=sqrt(a->data.u.d);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}

void ktx_sqrt_ld_i(variant *a, variant *b, variant *c) {
	init_var( c, LDOUBLE , 1);			
	realloc_var( c, 1);
	if (a->data.u.ld > 0) {
	  c->data.u.ld=sqrtl(a->data.u.ld);
	} else runtime(1 , "جذر روی اعداد منفی جواب ندارد.");
}


int assign_st(variant *a, variant *b) {  // a=b; a,b are TEXT
	int needed = strlen( b->data.u.st );

	alloc_var(a->ref);
	char * dest=  a->ref->data.u.st;
	
	//free up previos memory
	if (!dest || strlen(dest) < needed) {
		if (dest) free(dest);						
		dest=(char *) malloc(sizeof(char)*needed);		
		a->ref->data.u.st = dest;
	}
	strcpy(dest , b->data.u.st);
	return 1;
}

void kt_assign(variant *a, variant *b, variant *c) {
	if (b->dt==TEXT) {
		if (a->dt!=TEXT) runtime(1,"مقصد انتصاب باید از نوع متنی  باشد.");
		assign_st(a,b);
		return;
	}
	if (a->dt != b->dt) {
		//TODO: type conversion warning
	}
	ktp_assign[a->dt][b->dt](a,b,c);
}

void kt_add(variant *a, variant *b, variant *c) {
	if (a->dt <= b->dt) 
	 	ktp_add[a->dt][b->dt](a,b,c);
	else 
		ktp_add[b->dt][a->dt](b,a,c);
}

void kt_mul(variant *a, variant *b, variant *c) {
	if (a->dt <= b->dt) 
	 	ktp_mul[a->dt][b->dt](a,b,c);
	else 
		ktp_mul[b->dt][a->dt](b,a,c);
}


void kt_sub(variant *a, variant *b, variant *c) {
 	ktp_sub[a->dt][b->dt](a,b,c);
}

void kt_div(variant *a, variant *b, variant *c) {
 	ktp_div[a->dt][b->dt](a,b,c);
}

void kt_sqrt(variant *a, variant *b, variant *c) {
 	ktp_sqrt[a->dt][3](a,b,c);
}

void kt_mod(variant *a, variant *b, variant *c) {
	if (a->dt<=8 && b->dt<=8)
	 	ktp_mod[a->dt][b->dt](a,b,c);
	else {
		printf("%d mod %d\n",a->dt, b->dt);
		runtime(1,"عملگر باقیمانده روی عملوندهای اعشاری تعریف نشده است.");
	}
}

void kt_eq(variant *a, variant *b, variant *c) {
	if (a->dt==TEXT && b->dt==TEXT) {
		init_var( c, INT , 1);			
		realloc_var( c, 1);	
		c->data.u.i= (strcmp(a->data.u.st,b->data.u.st)==0);
		return ;
	}
	 
	if (a->dt <= b->dt) 
	 	ktp_eq[a->dt][b->dt](a,b,c);
	else 
		ktp_eq[b->dt][a->dt](b,a,c);
}

void kt_lt(variant *a, variant *b, variant *c) {
	if (a->dt==TEXT && b->dt==TEXT) {
		init_var( c, INT , 1);			
		realloc_var( c, 1);	
		c->data.u.i= (strcmp(a->data.u.st,b->data.u.st) < 0);
		return ;
	}
	 
 	ktp_lt[a->dt][b->dt](a,b,c);
}

void kt_gt(variant *a, variant *b, variant *c) {
	if (a->dt==TEXT && b->dt==TEXT) {
		init_var( c, INT , 1);			
		realloc_var( c, 1);	
		c->data.u.i= (strcmp(a->data.u.st,b->data.u.st) > 0);
		return ;
	}
	 
 	ktp_gt[a->dt][b->dt](a,b,c);
}

void kt_inc(variant *a, variant *b, variant *c) {
	alloc_var(a);
 	ktp_inc[a->dt][3] (a,b,c);
}

void kt_dec(variant *a, variant *b, variant *c) {
	alloc_var(a);
	ktp_dec[a->dt][3] (a,b,c);
}

void init_kt_add() {
	ktp_add[1][1] = ktx_add_c_c;		ktp_mul[1][1] = ktx_mul_c_c;
	ktp_eq[1][1] = ktx_eq_c_c;
	ktp_sub[1][1] = ktx_sub_c_c;		ktp_div[1][1] = ktx_div_c_c;
	ktp_lt[1][1] = ktx_lt_c_c;		ktp_gt[1][1] = ktx_gt_c_c;
	ktp_assign[1][1] = ktx_assign_c_c;
	ktp_mod[1][1] = ktx_mod_c_c;
	ktp_add[1][2] = ktx_add_c_uc;		ktp_mul[1][2] = ktx_mul_c_uc;
	ktp_eq[1][2] = ktx_eq_c_uc;
	ktp_sub[1][2] = ktx_sub_c_uc;		ktp_div[1][2] = ktx_div_c_uc;
	ktp_lt[1][2] = ktx_lt_c_uc;		ktp_gt[1][2] = ktx_gt_c_uc;
	ktp_assign[1][2] = ktx_assign_c_uc;
	ktp_mod[1][2] = ktx_mod_c_uc;
	ktp_inc[1][3] = ktx_inc_c_i;		ktp_dec[1][3] = ktx_dec_c_i;
	ktp_sqrt[1][3] = ktx_sqrt_c_i;
	ktp_add[1][3] = ktx_add_c_i;		ktp_mul[1][3] = ktx_mul_c_i;
	ktp_eq[1][3] = ktx_eq_c_i;
	ktp_sub[1][3] = ktx_sub_c_i;		ktp_div[1][3] = ktx_div_c_i;
	ktp_lt[1][3] = ktx_lt_c_i;		ktp_gt[1][3] = ktx_gt_c_i;
	ktp_assign[1][3] = ktx_assign_c_i;
	ktp_mod[1][3] = ktx_mod_c_i;
	ktp_add[1][4] = ktx_add_c_ui;		ktp_mul[1][4] = ktx_mul_c_ui;
	ktp_eq[1][4] = ktx_eq_c_ui;
	ktp_sub[1][4] = ktx_sub_c_ui;		ktp_div[1][4] = ktx_div_c_ui;
	ktp_lt[1][4] = ktx_lt_c_ui;		ktp_gt[1][4] = ktx_gt_c_ui;
	ktp_assign[1][4] = ktx_assign_c_ui;
	ktp_mod[1][4] = ktx_mod_c_ui;
	ktp_add[1][5] = ktx_add_c_li;		ktp_mul[1][5] = ktx_mul_c_li;
	ktp_eq[1][5] = ktx_eq_c_li;
	ktp_sub[1][5] = ktx_sub_c_li;		ktp_div[1][5] = ktx_div_c_li;
	ktp_lt[1][5] = ktx_lt_c_li;		ktp_gt[1][5] = ktx_gt_c_li;
	ktp_assign[1][5] = ktx_assign_c_li;
	ktp_mod[1][5] = ktx_mod_c_li;
	ktp_add[1][6] = ktx_add_c_uli;		ktp_mul[1][6] = ktx_mul_c_uli;
	ktp_eq[1][6] = ktx_eq_c_uli;
	ktp_sub[1][6] = ktx_sub_c_uli;		ktp_div[1][6] = ktx_div_c_uli;
	ktp_lt[1][6] = ktx_lt_c_uli;		ktp_gt[1][6] = ktx_gt_c_uli;
	ktp_assign[1][6] = ktx_assign_c_uli;
	ktp_mod[1][6] = ktx_mod_c_uli;
	ktp_add[1][7] = ktx_add_c_lli;		ktp_mul[1][7] = ktx_mul_c_lli;
	ktp_eq[1][7] = ktx_eq_c_lli;
	ktp_sub[1][7] = ktx_sub_c_lli;		ktp_div[1][7] = ktx_div_c_lli;
	ktp_lt[1][7] = ktx_lt_c_lli;		ktp_gt[1][7] = ktx_gt_c_lli;
	ktp_assign[1][7] = ktx_assign_c_lli;
	ktp_mod[1][7] = ktx_mod_c_lli;
	ktp_add[1][8] = ktx_add_c_ulli;		ktp_mul[1][8] = ktx_mul_c_ulli;
	ktp_eq[1][8] = ktx_eq_c_ulli;
	ktp_sub[1][8] = ktx_sub_c_ulli;		ktp_div[1][8] = ktx_div_c_ulli;
	ktp_lt[1][8] = ktx_lt_c_ulli;		ktp_gt[1][8] = ktx_gt_c_ulli;
	ktp_assign[1][8] = ktx_assign_c_ulli;
	ktp_mod[1][8] = ktx_mod_c_ulli;
	ktp_add[1][9] = ktx_add_c_f;		ktp_mul[1][9] = ktx_mul_c_f;
	ktp_eq[1][9] = ktx_eq_c_f;
	ktp_sub[1][9] = ktx_sub_c_f;		ktp_div[1][9] = ktx_div_c_f;
	ktp_lt[1][9] = ktx_lt_c_f;		ktp_gt[1][9] = ktx_gt_c_f;
	ktp_assign[1][9] = ktx_assign_c_f;
	ktp_add[1][10] = ktx_add_c_d;		ktp_mul[1][10] = ktx_mul_c_d;
	ktp_eq[1][10] = ktx_eq_c_d;
	ktp_sub[1][10] = ktx_sub_c_d;		ktp_div[1][10] = ktx_div_c_d;
	ktp_lt[1][10] = ktx_lt_c_d;		ktp_gt[1][10] = ktx_gt_c_d;
	ktp_assign[1][10] = ktx_assign_c_d;
	ktp_add[1][11] = ktx_add_c_ld;		ktp_mul[1][11] = ktx_mul_c_ld;
	ktp_eq[1][11] = ktx_eq_c_ld;
	ktp_sub[1][11] = ktx_sub_c_ld;		ktp_div[1][11] = ktx_div_c_ld;
	ktp_lt[1][11] = ktx_lt_c_ld;		ktp_gt[1][11] = ktx_gt_c_ld;
	ktp_assign[1][11] = ktx_assign_c_ld;
	ktp_sub[2][1] = ktx_sub_uc_c;		ktp_div[2][1] = ktx_div_uc_c;
	ktp_lt[2][1] = ktx_lt_uc_c;		ktp_gt[2][1] = ktx_gt_uc_c;
	ktp_assign[2][1] = ktx_assign_uc_c;
	ktp_mod[2][1] = ktx_mod_uc_c;
	ktp_add[2][2] = ktx_add_uc_uc;		ktp_mul[2][2] = ktx_mul_uc_uc;
	ktp_eq[2][2] = ktx_eq_uc_uc;
	ktp_sub[2][2] = ktx_sub_uc_uc;		ktp_div[2][2] = ktx_div_uc_uc;
	ktp_lt[2][2] = ktx_lt_uc_uc;		ktp_gt[2][2] = ktx_gt_uc_uc;
	ktp_assign[2][2] = ktx_assign_uc_uc;
	ktp_mod[2][2] = ktx_mod_uc_uc;
	ktp_inc[2][3] = ktx_inc_uc_i;		ktp_dec[2][3] = ktx_dec_uc_i;
	ktp_sqrt[2][3] = ktx_sqrt_uc_i;
	ktp_add[2][3] = ktx_add_uc_i;		ktp_mul[2][3] = ktx_mul_uc_i;
	ktp_eq[2][3] = ktx_eq_uc_i;
	ktp_sub[2][3] = ktx_sub_uc_i;		ktp_div[2][3] = ktx_div_uc_i;
	ktp_lt[2][3] = ktx_lt_uc_i;		ktp_gt[2][3] = ktx_gt_uc_i;
	ktp_assign[2][3] = ktx_assign_uc_i;
	ktp_mod[2][3] = ktx_mod_uc_i;
	ktp_add[2][4] = ktx_add_uc_ui;		ktp_mul[2][4] = ktx_mul_uc_ui;
	ktp_eq[2][4] = ktx_eq_uc_ui;
	ktp_sub[2][4] = ktx_sub_uc_ui;		ktp_div[2][4] = ktx_div_uc_ui;
	ktp_lt[2][4] = ktx_lt_uc_ui;		ktp_gt[2][4] = ktx_gt_uc_ui;
	ktp_assign[2][4] = ktx_assign_uc_ui;
	ktp_mod[2][4] = ktx_mod_uc_ui;
	ktp_add[2][5] = ktx_add_uc_li;		ktp_mul[2][5] = ktx_mul_uc_li;
	ktp_eq[2][5] = ktx_eq_uc_li;
	ktp_sub[2][5] = ktx_sub_uc_li;		ktp_div[2][5] = ktx_div_uc_li;
	ktp_lt[2][5] = ktx_lt_uc_li;		ktp_gt[2][5] = ktx_gt_uc_li;
	ktp_assign[2][5] = ktx_assign_uc_li;
	ktp_mod[2][5] = ktx_mod_uc_li;
	ktp_add[2][6] = ktx_add_uc_uli;		ktp_mul[2][6] = ktx_mul_uc_uli;
	ktp_eq[2][6] = ktx_eq_uc_uli;
	ktp_sub[2][6] = ktx_sub_uc_uli;		ktp_div[2][6] = ktx_div_uc_uli;
	ktp_lt[2][6] = ktx_lt_uc_uli;		ktp_gt[2][6] = ktx_gt_uc_uli;
	ktp_assign[2][6] = ktx_assign_uc_uli;
	ktp_mod[2][6] = ktx_mod_uc_uli;
	ktp_add[2][7] = ktx_add_uc_lli;		ktp_mul[2][7] = ktx_mul_uc_lli;
	ktp_eq[2][7] = ktx_eq_uc_lli;
	ktp_sub[2][7] = ktx_sub_uc_lli;		ktp_div[2][7] = ktx_div_uc_lli;
	ktp_lt[2][7] = ktx_lt_uc_lli;		ktp_gt[2][7] = ktx_gt_uc_lli;
	ktp_assign[2][7] = ktx_assign_uc_lli;
	ktp_mod[2][7] = ktx_mod_uc_lli;
	ktp_add[2][8] = ktx_add_uc_ulli;		ktp_mul[2][8] = ktx_mul_uc_ulli;
	ktp_eq[2][8] = ktx_eq_uc_ulli;
	ktp_sub[2][8] = ktx_sub_uc_ulli;		ktp_div[2][8] = ktx_div_uc_ulli;
	ktp_lt[2][8] = ktx_lt_uc_ulli;		ktp_gt[2][8] = ktx_gt_uc_ulli;
	ktp_assign[2][8] = ktx_assign_uc_ulli;
	ktp_mod[2][8] = ktx_mod_uc_ulli;
	ktp_add[2][9] = ktx_add_uc_f;		ktp_mul[2][9] = ktx_mul_uc_f;
	ktp_eq[2][9] = ktx_eq_uc_f;
	ktp_sub[2][9] = ktx_sub_uc_f;		ktp_div[2][9] = ktx_div_uc_f;
	ktp_lt[2][9] = ktx_lt_uc_f;		ktp_gt[2][9] = ktx_gt_uc_f;
	ktp_assign[2][9] = ktx_assign_uc_f;
	ktp_add[2][10] = ktx_add_uc_d;		ktp_mul[2][10] = ktx_mul_uc_d;
	ktp_eq[2][10] = ktx_eq_uc_d;
	ktp_sub[2][10] = ktx_sub_uc_d;		ktp_div[2][10] = ktx_div_uc_d;
	ktp_lt[2][10] = ktx_lt_uc_d;		ktp_gt[2][10] = ktx_gt_uc_d;
	ktp_assign[2][10] = ktx_assign_uc_d;
	ktp_add[2][11] = ktx_add_uc_ld;		ktp_mul[2][11] = ktx_mul_uc_ld;
	ktp_eq[2][11] = ktx_eq_uc_ld;
	ktp_sub[2][11] = ktx_sub_uc_ld;		ktp_div[2][11] = ktx_div_uc_ld;
	ktp_lt[2][11] = ktx_lt_uc_ld;		ktp_gt[2][11] = ktx_gt_uc_ld;
	ktp_assign[2][11] = ktx_assign_uc_ld;
	ktp_sub[3][1] = ktx_sub_i_c;		ktp_div[3][1] = ktx_div_i_c;
	ktp_lt[3][1] = ktx_lt_i_c;		ktp_gt[3][1] = ktx_gt_i_c;
	ktp_assign[3][1] = ktx_assign_i_c;
	ktp_mod[3][1] = ktx_mod_i_c;
	ktp_sub[3][2] = ktx_sub_i_uc;		ktp_div[3][2] = ktx_div_i_uc;
	ktp_lt[3][2] = ktx_lt_i_uc;		ktp_gt[3][2] = ktx_gt_i_uc;
	ktp_assign[3][2] = ktx_assign_i_uc;
	ktp_mod[3][2] = ktx_mod_i_uc;
	ktp_inc[3][3] = ktx_inc_i_i;		ktp_dec[3][3] = ktx_dec_i_i;
	ktp_sqrt[3][3] = ktx_sqrt_i_i;
	ktp_add[3][3] = ktx_add_i_i;		ktp_mul[3][3] = ktx_mul_i_i;
	ktp_eq[3][3] = ktx_eq_i_i;
	ktp_sub[3][3] = ktx_sub_i_i;		ktp_div[3][3] = ktx_div_i_i;
	ktp_lt[3][3] = ktx_lt_i_i;		ktp_gt[3][3] = ktx_gt_i_i;
	ktp_assign[3][3] = ktx_assign_i_i;
	ktp_mod[3][3] = ktx_mod_i_i;
	ktp_add[3][4] = ktx_add_i_ui;		ktp_mul[3][4] = ktx_mul_i_ui;
	ktp_eq[3][4] = ktx_eq_i_ui;
	ktp_sub[3][4] = ktx_sub_i_ui;		ktp_div[3][4] = ktx_div_i_ui;
	ktp_lt[3][4] = ktx_lt_i_ui;		ktp_gt[3][4] = ktx_gt_i_ui;
	ktp_assign[3][4] = ktx_assign_i_ui;
	ktp_mod[3][4] = ktx_mod_i_ui;
	ktp_add[3][5] = ktx_add_i_li;		ktp_mul[3][5] = ktx_mul_i_li;
	ktp_eq[3][5] = ktx_eq_i_li;
	ktp_sub[3][5] = ktx_sub_i_li;		ktp_div[3][5] = ktx_div_i_li;
	ktp_lt[3][5] = ktx_lt_i_li;		ktp_gt[3][5] = ktx_gt_i_li;
	ktp_assign[3][5] = ktx_assign_i_li;
	ktp_mod[3][5] = ktx_mod_i_li;
	ktp_add[3][6] = ktx_add_i_uli;		ktp_mul[3][6] = ktx_mul_i_uli;
	ktp_eq[3][6] = ktx_eq_i_uli;
	ktp_sub[3][6] = ktx_sub_i_uli;		ktp_div[3][6] = ktx_div_i_uli;
	ktp_lt[3][6] = ktx_lt_i_uli;		ktp_gt[3][6] = ktx_gt_i_uli;
	ktp_assign[3][6] = ktx_assign_i_uli;
	ktp_mod[3][6] = ktx_mod_i_uli;
	ktp_add[3][7] = ktx_add_i_lli;		ktp_mul[3][7] = ktx_mul_i_lli;
	ktp_eq[3][7] = ktx_eq_i_lli;
	ktp_sub[3][7] = ktx_sub_i_lli;		ktp_div[3][7] = ktx_div_i_lli;
	ktp_lt[3][7] = ktx_lt_i_lli;		ktp_gt[3][7] = ktx_gt_i_lli;
	ktp_assign[3][7] = ktx_assign_i_lli;
	ktp_mod[3][7] = ktx_mod_i_lli;
	ktp_add[3][8] = ktx_add_i_ulli;		ktp_mul[3][8] = ktx_mul_i_ulli;
	ktp_eq[3][8] = ktx_eq_i_ulli;
	ktp_sub[3][8] = ktx_sub_i_ulli;		ktp_div[3][8] = ktx_div_i_ulli;
	ktp_lt[3][8] = ktx_lt_i_ulli;		ktp_gt[3][8] = ktx_gt_i_ulli;
	ktp_assign[3][8] = ktx_assign_i_ulli;
	ktp_mod[3][8] = ktx_mod_i_ulli;
	ktp_add[3][9] = ktx_add_i_f;		ktp_mul[3][9] = ktx_mul_i_f;
	ktp_eq[3][9] = ktx_eq_i_f;
	ktp_sub[3][9] = ktx_sub_i_f;		ktp_div[3][9] = ktx_div_i_f;
	ktp_lt[3][9] = ktx_lt_i_f;		ktp_gt[3][9] = ktx_gt_i_f;
	ktp_assign[3][9] = ktx_assign_i_f;
	ktp_add[3][10] = ktx_add_i_d;		ktp_mul[3][10] = ktx_mul_i_d;
	ktp_eq[3][10] = ktx_eq_i_d;
	ktp_sub[3][10] = ktx_sub_i_d;		ktp_div[3][10] = ktx_div_i_d;
	ktp_lt[3][10] = ktx_lt_i_d;		ktp_gt[3][10] = ktx_gt_i_d;
	ktp_assign[3][10] = ktx_assign_i_d;
	ktp_add[3][11] = ktx_add_i_ld;		ktp_mul[3][11] = ktx_mul_i_ld;
	ktp_eq[3][11] = ktx_eq_i_ld;
	ktp_sub[3][11] = ktx_sub_i_ld;		ktp_div[3][11] = ktx_div_i_ld;
	ktp_lt[3][11] = ktx_lt_i_ld;		ktp_gt[3][11] = ktx_gt_i_ld;
	ktp_assign[3][11] = ktx_assign_i_ld;
	ktp_sub[4][1] = ktx_sub_ui_c;		ktp_div[4][1] = ktx_div_ui_c;
	ktp_lt[4][1] = ktx_lt_ui_c;		ktp_gt[4][1] = ktx_gt_ui_c;
	ktp_assign[4][1] = ktx_assign_ui_c;
	ktp_mod[4][1] = ktx_mod_ui_c;
	ktp_sub[4][2] = ktx_sub_ui_uc;		ktp_div[4][2] = ktx_div_ui_uc;
	ktp_lt[4][2] = ktx_lt_ui_uc;		ktp_gt[4][2] = ktx_gt_ui_uc;
	ktp_assign[4][2] = ktx_assign_ui_uc;
	ktp_mod[4][2] = ktx_mod_ui_uc;
	ktp_inc[4][3] = ktx_inc_ui_i;		ktp_dec[4][3] = ktx_dec_ui_i;
	ktp_sqrt[4][3] = ktx_sqrt_ui_i;
	ktp_sub[4][3] = ktx_sub_ui_i;		ktp_div[4][3] = ktx_div_ui_i;
	ktp_lt[4][3] = ktx_lt_ui_i;		ktp_gt[4][3] = ktx_gt_ui_i;
	ktp_assign[4][3] = ktx_assign_ui_i;
	ktp_mod[4][3] = ktx_mod_ui_i;
	ktp_add[4][4] = ktx_add_ui_ui;		ktp_mul[4][4] = ktx_mul_ui_ui;
	ktp_eq[4][4] = ktx_eq_ui_ui;
	ktp_sub[4][4] = ktx_sub_ui_ui;		ktp_div[4][4] = ktx_div_ui_ui;
	ktp_lt[4][4] = ktx_lt_ui_ui;		ktp_gt[4][4] = ktx_gt_ui_ui;
	ktp_assign[4][4] = ktx_assign_ui_ui;
	ktp_mod[4][4] = ktx_mod_ui_ui;
	ktp_add[4][5] = ktx_add_ui_li;		ktp_mul[4][5] = ktx_mul_ui_li;
	ktp_eq[4][5] = ktx_eq_ui_li;
	ktp_sub[4][5] = ktx_sub_ui_li;		ktp_div[4][5] = ktx_div_ui_li;
	ktp_lt[4][5] = ktx_lt_ui_li;		ktp_gt[4][5] = ktx_gt_ui_li;
	ktp_assign[4][5] = ktx_assign_ui_li;
	ktp_mod[4][5] = ktx_mod_ui_li;
	ktp_add[4][6] = ktx_add_ui_uli;		ktp_mul[4][6] = ktx_mul_ui_uli;
	ktp_eq[4][6] = ktx_eq_ui_uli;
	ktp_sub[4][6] = ktx_sub_ui_uli;		ktp_div[4][6] = ktx_div_ui_uli;
	ktp_lt[4][6] = ktx_lt_ui_uli;		ktp_gt[4][6] = ktx_gt_ui_uli;
	ktp_assign[4][6] = ktx_assign_ui_uli;
	ktp_mod[4][6] = ktx_mod_ui_uli;
	ktp_add[4][7] = ktx_add_ui_lli;		ktp_mul[4][7] = ktx_mul_ui_lli;
	ktp_eq[4][7] = ktx_eq_ui_lli;
	ktp_sub[4][7] = ktx_sub_ui_lli;		ktp_div[4][7] = ktx_div_ui_lli;
	ktp_lt[4][7] = ktx_lt_ui_lli;		ktp_gt[4][7] = ktx_gt_ui_lli;
	ktp_assign[4][7] = ktx_assign_ui_lli;
	ktp_mod[4][7] = ktx_mod_ui_lli;
	ktp_add[4][8] = ktx_add_ui_ulli;		ktp_mul[4][8] = ktx_mul_ui_ulli;
	ktp_eq[4][8] = ktx_eq_ui_ulli;
	ktp_sub[4][8] = ktx_sub_ui_ulli;		ktp_div[4][8] = ktx_div_ui_ulli;
	ktp_lt[4][8] = ktx_lt_ui_ulli;		ktp_gt[4][8] = ktx_gt_ui_ulli;
	ktp_assign[4][8] = ktx_assign_ui_ulli;
	ktp_mod[4][8] = ktx_mod_ui_ulli;
	ktp_add[4][9] = ktx_add_ui_f;		ktp_mul[4][9] = ktx_mul_ui_f;
	ktp_eq[4][9] = ktx_eq_ui_f;
	ktp_sub[4][9] = ktx_sub_ui_f;		ktp_div[4][9] = ktx_div_ui_f;
	ktp_lt[4][9] = ktx_lt_ui_f;		ktp_gt[4][9] = ktx_gt_ui_f;
	ktp_assign[4][9] = ktx_assign_ui_f;
	ktp_add[4][10] = ktx_add_ui_d;		ktp_mul[4][10] = ktx_mul_ui_d;
	ktp_eq[4][10] = ktx_eq_ui_d;
	ktp_sub[4][10] = ktx_sub_ui_d;		ktp_div[4][10] = ktx_div_ui_d;
	ktp_lt[4][10] = ktx_lt_ui_d;		ktp_gt[4][10] = ktx_gt_ui_d;
	ktp_assign[4][10] = ktx_assign_ui_d;
	ktp_add[4][11] = ktx_add_ui_ld;		ktp_mul[4][11] = ktx_mul_ui_ld;
	ktp_eq[4][11] = ktx_eq_ui_ld;
	ktp_sub[4][11] = ktx_sub_ui_ld;		ktp_div[4][11] = ktx_div_ui_ld;
	ktp_lt[4][11] = ktx_lt_ui_ld;		ktp_gt[4][11] = ktx_gt_ui_ld;
	ktp_assign[4][11] = ktx_assign_ui_ld;
	ktp_sub[5][1] = ktx_sub_li_c;		ktp_div[5][1] = ktx_div_li_c;
	ktp_lt[5][1] = ktx_lt_li_c;		ktp_gt[5][1] = ktx_gt_li_c;
	ktp_assign[5][1] = ktx_assign_li_c;
	ktp_mod[5][1] = ktx_mod_li_c;
	ktp_sub[5][2] = ktx_sub_li_uc;		ktp_div[5][2] = ktx_div_li_uc;
	ktp_lt[5][2] = ktx_lt_li_uc;		ktp_gt[5][2] = ktx_gt_li_uc;
	ktp_assign[5][2] = ktx_assign_li_uc;
	ktp_mod[5][2] = ktx_mod_li_uc;
	ktp_inc[5][3] = ktx_inc_li_i;		ktp_dec[5][3] = ktx_dec_li_i;
	ktp_sqrt[5][3] = ktx_sqrt_li_i;
	ktp_sub[5][3] = ktx_sub_li_i;		ktp_div[5][3] = ktx_div_li_i;
	ktp_lt[5][3] = ktx_lt_li_i;		ktp_gt[5][3] = ktx_gt_li_i;
	ktp_assign[5][3] = ktx_assign_li_i;
	ktp_mod[5][3] = ktx_mod_li_i;
	ktp_sub[5][4] = ktx_sub_li_ui;		ktp_div[5][4] = ktx_div_li_ui;
	ktp_lt[5][4] = ktx_lt_li_ui;		ktp_gt[5][4] = ktx_gt_li_ui;
	ktp_assign[5][4] = ktx_assign_li_ui;
	ktp_mod[5][4] = ktx_mod_li_ui;
	ktp_add[5][5] = ktx_add_li_li;		ktp_mul[5][5] = ktx_mul_li_li;
	ktp_eq[5][5] = ktx_eq_li_li;
	ktp_sub[5][5] = ktx_sub_li_li;		ktp_div[5][5] = ktx_div_li_li;
	ktp_lt[5][5] = ktx_lt_li_li;		ktp_gt[5][5] = ktx_gt_li_li;
	ktp_assign[5][5] = ktx_assign_li_li;
	ktp_mod[5][5] = ktx_mod_li_li;
	ktp_add[5][6] = ktx_add_li_uli;		ktp_mul[5][6] = ktx_mul_li_uli;
	ktp_eq[5][6] = ktx_eq_li_uli;
	ktp_sub[5][6] = ktx_sub_li_uli;		ktp_div[5][6] = ktx_div_li_uli;
	ktp_lt[5][6] = ktx_lt_li_uli;		ktp_gt[5][6] = ktx_gt_li_uli;
	ktp_assign[5][6] = ktx_assign_li_uli;
	ktp_mod[5][6] = ktx_mod_li_uli;
	ktp_add[5][7] = ktx_add_li_lli;		ktp_mul[5][7] = ktx_mul_li_lli;
	ktp_eq[5][7] = ktx_eq_li_lli;
	ktp_sub[5][7] = ktx_sub_li_lli;		ktp_div[5][7] = ktx_div_li_lli;
	ktp_lt[5][7] = ktx_lt_li_lli;		ktp_gt[5][7] = ktx_gt_li_lli;
	ktp_assign[5][7] = ktx_assign_li_lli;
	ktp_mod[5][7] = ktx_mod_li_lli;
	ktp_add[5][8] = ktx_add_li_ulli;		ktp_mul[5][8] = ktx_mul_li_ulli;
	ktp_eq[5][8] = ktx_eq_li_ulli;
	ktp_sub[5][8] = ktx_sub_li_ulli;		ktp_div[5][8] = ktx_div_li_ulli;
	ktp_lt[5][8] = ktx_lt_li_ulli;		ktp_gt[5][8] = ktx_gt_li_ulli;
	ktp_assign[5][8] = ktx_assign_li_ulli;
	ktp_mod[5][8] = ktx_mod_li_ulli;
	ktp_add[5][9] = ktx_add_li_f;		ktp_mul[5][9] = ktx_mul_li_f;
	ktp_eq[5][9] = ktx_eq_li_f;
	ktp_sub[5][9] = ktx_sub_li_f;		ktp_div[5][9] = ktx_div_li_f;
	ktp_lt[5][9] = ktx_lt_li_f;		ktp_gt[5][9] = ktx_gt_li_f;
	ktp_assign[5][9] = ktx_assign_li_f;
	ktp_add[5][10] = ktx_add_li_d;		ktp_mul[5][10] = ktx_mul_li_d;
	ktp_eq[5][10] = ktx_eq_li_d;
	ktp_sub[5][10] = ktx_sub_li_d;		ktp_div[5][10] = ktx_div_li_d;
	ktp_lt[5][10] = ktx_lt_li_d;		ktp_gt[5][10] = ktx_gt_li_d;
	ktp_assign[5][10] = ktx_assign_li_d;
	ktp_add[5][11] = ktx_add_li_ld;		ktp_mul[5][11] = ktx_mul_li_ld;
	ktp_eq[5][11] = ktx_eq_li_ld;
	ktp_sub[5][11] = ktx_sub_li_ld;		ktp_div[5][11] = ktx_div_li_ld;
	ktp_lt[5][11] = ktx_lt_li_ld;		ktp_gt[5][11] = ktx_gt_li_ld;
	ktp_assign[5][11] = ktx_assign_li_ld;
	ktp_sub[6][1] = ktx_sub_uli_c;		ktp_div[6][1] = ktx_div_uli_c;
	ktp_lt[6][1] = ktx_lt_uli_c;		ktp_gt[6][1] = ktx_gt_uli_c;
	ktp_assign[6][1] = ktx_assign_uli_c;
	ktp_mod[6][1] = ktx_mod_uli_c;
	ktp_sub[6][2] = ktx_sub_uli_uc;		ktp_div[6][2] = ktx_div_uli_uc;
	ktp_lt[6][2] = ktx_lt_uli_uc;		ktp_gt[6][2] = ktx_gt_uli_uc;
	ktp_assign[6][2] = ktx_assign_uli_uc;
	ktp_mod[6][2] = ktx_mod_uli_uc;
	ktp_inc[6][3] = ktx_inc_uli_i;		ktp_dec[6][3] = ktx_dec_uli_i;
	ktp_sqrt[6][3] = ktx_sqrt_uli_i;
	ktp_sub[6][3] = ktx_sub_uli_i;		ktp_div[6][3] = ktx_div_uli_i;
	ktp_lt[6][3] = ktx_lt_uli_i;		ktp_gt[6][3] = ktx_gt_uli_i;
	ktp_assign[6][3] = ktx_assign_uli_i;
	ktp_mod[6][3] = ktx_mod_uli_i;
	ktp_sub[6][4] = ktx_sub_uli_ui;		ktp_div[6][4] = ktx_div_uli_ui;
	ktp_lt[6][4] = ktx_lt_uli_ui;		ktp_gt[6][4] = ktx_gt_uli_ui;
	ktp_assign[6][4] = ktx_assign_uli_ui;
	ktp_mod[6][4] = ktx_mod_uli_ui;
	ktp_sub[6][5] = ktx_sub_uli_li;		ktp_div[6][5] = ktx_div_uli_li;
	ktp_lt[6][5] = ktx_lt_uli_li;		ktp_gt[6][5] = ktx_gt_uli_li;
	ktp_assign[6][5] = ktx_assign_uli_li;
	ktp_mod[6][5] = ktx_mod_uli_li;
	ktp_add[6][6] = ktx_add_uli_uli;		ktp_mul[6][6] = ktx_mul_uli_uli;
	ktp_eq[6][6] = ktx_eq_uli_uli;
	ktp_sub[6][6] = ktx_sub_uli_uli;		ktp_div[6][6] = ktx_div_uli_uli;
	ktp_lt[6][6] = ktx_lt_uli_uli;		ktp_gt[6][6] = ktx_gt_uli_uli;
	ktp_assign[6][6] = ktx_assign_uli_uli;
	ktp_mod[6][6] = ktx_mod_uli_uli;
	ktp_add[6][7] = ktx_add_uli_lli;		ktp_mul[6][7] = ktx_mul_uli_lli;
	ktp_eq[6][7] = ktx_eq_uli_lli;
	ktp_sub[6][7] = ktx_sub_uli_lli;		ktp_div[6][7] = ktx_div_uli_lli;
	ktp_lt[6][7] = ktx_lt_uli_lli;		ktp_gt[6][7] = ktx_gt_uli_lli;
	ktp_assign[6][7] = ktx_assign_uli_lli;
	ktp_mod[6][7] = ktx_mod_uli_lli;
	ktp_add[6][8] = ktx_add_uli_ulli;		ktp_mul[6][8] = ktx_mul_uli_ulli;
	ktp_eq[6][8] = ktx_eq_uli_ulli;
	ktp_sub[6][8] = ktx_sub_uli_ulli;		ktp_div[6][8] = ktx_div_uli_ulli;
	ktp_lt[6][8] = ktx_lt_uli_ulli;		ktp_gt[6][8] = ktx_gt_uli_ulli;
	ktp_assign[6][8] = ktx_assign_uli_ulli;
	ktp_mod[6][8] = ktx_mod_uli_ulli;
	ktp_add[6][9] = ktx_add_uli_f;		ktp_mul[6][9] = ktx_mul_uli_f;
	ktp_eq[6][9] = ktx_eq_uli_f;
	ktp_sub[6][9] = ktx_sub_uli_f;		ktp_div[6][9] = ktx_div_uli_f;
	ktp_lt[6][9] = ktx_lt_uli_f;		ktp_gt[6][9] = ktx_gt_uli_f;
	ktp_assign[6][9] = ktx_assign_uli_f;
	ktp_add[6][10] = ktx_add_uli_d;		ktp_mul[6][10] = ktx_mul_uli_d;
	ktp_eq[6][10] = ktx_eq_uli_d;
	ktp_sub[6][10] = ktx_sub_uli_d;		ktp_div[6][10] = ktx_div_uli_d;
	ktp_lt[6][10] = ktx_lt_uli_d;		ktp_gt[6][10] = ktx_gt_uli_d;
	ktp_assign[6][10] = ktx_assign_uli_d;
	ktp_add[6][11] = ktx_add_uli_ld;		ktp_mul[6][11] = ktx_mul_uli_ld;
	ktp_eq[6][11] = ktx_eq_uli_ld;
	ktp_sub[6][11] = ktx_sub_uli_ld;		ktp_div[6][11] = ktx_div_uli_ld;
	ktp_lt[6][11] = ktx_lt_uli_ld;		ktp_gt[6][11] = ktx_gt_uli_ld;
	ktp_assign[6][11] = ktx_assign_uli_ld;
	ktp_sub[7][1] = ktx_sub_lli_c;		ktp_div[7][1] = ktx_div_lli_c;
	ktp_lt[7][1] = ktx_lt_lli_c;		ktp_gt[7][1] = ktx_gt_lli_c;
	ktp_assign[7][1] = ktx_assign_lli_c;
	ktp_mod[7][1] = ktx_mod_lli_c;
	ktp_sub[7][2] = ktx_sub_lli_uc;		ktp_div[7][2] = ktx_div_lli_uc;
	ktp_lt[7][2] = ktx_lt_lli_uc;		ktp_gt[7][2] = ktx_gt_lli_uc;
	ktp_assign[7][2] = ktx_assign_lli_uc;
	ktp_mod[7][2] = ktx_mod_lli_uc;
	ktp_inc[7][3] = ktx_inc_lli_i;		ktp_dec[7][3] = ktx_dec_lli_i;
	ktp_sqrt[7][3] = ktx_sqrt_lli_i;
	ktp_sub[7][3] = ktx_sub_lli_i;		ktp_div[7][3] = ktx_div_lli_i;
	ktp_lt[7][3] = ktx_lt_lli_i;		ktp_gt[7][3] = ktx_gt_lli_i;
	ktp_assign[7][3] = ktx_assign_lli_i;
	ktp_mod[7][3] = ktx_mod_lli_i;
	ktp_sub[7][4] = ktx_sub_lli_ui;		ktp_div[7][4] = ktx_div_lli_ui;
	ktp_lt[7][4] = ktx_lt_lli_ui;		ktp_gt[7][4] = ktx_gt_lli_ui;
	ktp_assign[7][4] = ktx_assign_lli_ui;
	ktp_mod[7][4] = ktx_mod_lli_ui;
	ktp_sub[7][5] = ktx_sub_lli_li;		ktp_div[7][5] = ktx_div_lli_li;
	ktp_lt[7][5] = ktx_lt_lli_li;		ktp_gt[7][5] = ktx_gt_lli_li;
	ktp_assign[7][5] = ktx_assign_lli_li;
	ktp_mod[7][5] = ktx_mod_lli_li;
	ktp_sub[7][6] = ktx_sub_lli_uli;		ktp_div[7][6] = ktx_div_lli_uli;
	ktp_lt[7][6] = ktx_lt_lli_uli;		ktp_gt[7][6] = ktx_gt_lli_uli;
	ktp_assign[7][6] = ktx_assign_lli_uli;
	ktp_mod[7][6] = ktx_mod_lli_uli;
	ktp_add[7][7] = ktx_add_lli_lli;		ktp_mul[7][7] = ktx_mul_lli_lli;
	ktp_eq[7][7] = ktx_eq_lli_lli;
	ktp_sub[7][7] = ktx_sub_lli_lli;		ktp_div[7][7] = ktx_div_lli_lli;
	ktp_lt[7][7] = ktx_lt_lli_lli;		ktp_gt[7][7] = ktx_gt_lli_lli;
	ktp_assign[7][7] = ktx_assign_lli_lli;
	ktp_mod[7][7] = ktx_mod_lli_lli;
	ktp_add[7][8] = ktx_add_lli_ulli;		ktp_mul[7][8] = ktx_mul_lli_ulli;
	ktp_eq[7][8] = ktx_eq_lli_ulli;
	ktp_sub[7][8] = ktx_sub_lli_ulli;		ktp_div[7][8] = ktx_div_lli_ulli;
	ktp_lt[7][8] = ktx_lt_lli_ulli;		ktp_gt[7][8] = ktx_gt_lli_ulli;
	ktp_assign[7][8] = ktx_assign_lli_ulli;
	ktp_mod[7][8] = ktx_mod_lli_ulli;
	ktp_add[7][9] = ktx_add_lli_f;		ktp_mul[7][9] = ktx_mul_lli_f;
	ktp_eq[7][9] = ktx_eq_lli_f;
	ktp_sub[7][9] = ktx_sub_lli_f;		ktp_div[7][9] = ktx_div_lli_f;
	ktp_lt[7][9] = ktx_lt_lli_f;		ktp_gt[7][9] = ktx_gt_lli_f;
	ktp_assign[7][9] = ktx_assign_lli_f;
	ktp_add[7][10] = ktx_add_lli_d;		ktp_mul[7][10] = ktx_mul_lli_d;
	ktp_eq[7][10] = ktx_eq_lli_d;
	ktp_sub[7][10] = ktx_sub_lli_d;		ktp_div[7][10] = ktx_div_lli_d;
	ktp_lt[7][10] = ktx_lt_lli_d;		ktp_gt[7][10] = ktx_gt_lli_d;
	ktp_assign[7][10] = ktx_assign_lli_d;
	ktp_add[7][11] = ktx_add_lli_ld;		ktp_mul[7][11] = ktx_mul_lli_ld;
	ktp_eq[7][11] = ktx_eq_lli_ld;
	ktp_sub[7][11] = ktx_sub_lli_ld;		ktp_div[7][11] = ktx_div_lli_ld;
	ktp_lt[7][11] = ktx_lt_lli_ld;		ktp_gt[7][11] = ktx_gt_lli_ld;
	ktp_assign[7][11] = ktx_assign_lli_ld;
	ktp_sub[8][1] = ktx_sub_ulli_c;		ktp_div[8][1] = ktx_div_ulli_c;
	ktp_lt[8][1] = ktx_lt_ulli_c;		ktp_gt[8][1] = ktx_gt_ulli_c;
	ktp_assign[8][1] = ktx_assign_ulli_c;
	ktp_mod[8][1] = ktx_mod_ulli_c;
	ktp_sub[8][2] = ktx_sub_ulli_uc;		ktp_div[8][2] = ktx_div_ulli_uc;
	ktp_lt[8][2] = ktx_lt_ulli_uc;		ktp_gt[8][2] = ktx_gt_ulli_uc;
	ktp_assign[8][2] = ktx_assign_ulli_uc;
	ktp_mod[8][2] = ktx_mod_ulli_uc;
	ktp_inc[8][3] = ktx_inc_ulli_i;		ktp_dec[8][3] = ktx_dec_ulli_i;
	ktp_sqrt[8][3] = ktx_sqrt_ulli_i;
	ktp_sub[8][3] = ktx_sub_ulli_i;		ktp_div[8][3] = ktx_div_ulli_i;
	ktp_lt[8][3] = ktx_lt_ulli_i;		ktp_gt[8][3] = ktx_gt_ulli_i;
	ktp_assign[8][3] = ktx_assign_ulli_i;
	ktp_mod[8][3] = ktx_mod_ulli_i;
	ktp_sub[8][4] = ktx_sub_ulli_ui;		ktp_div[8][4] = ktx_div_ulli_ui;
	ktp_lt[8][4] = ktx_lt_ulli_ui;		ktp_gt[8][4] = ktx_gt_ulli_ui;
	ktp_assign[8][4] = ktx_assign_ulli_ui;
	ktp_mod[8][4] = ktx_mod_ulli_ui;
	ktp_sub[8][5] = ktx_sub_ulli_li;		ktp_div[8][5] = ktx_div_ulli_li;
	ktp_lt[8][5] = ktx_lt_ulli_li;		ktp_gt[8][5] = ktx_gt_ulli_li;
	ktp_assign[8][5] = ktx_assign_ulli_li;
	ktp_mod[8][5] = ktx_mod_ulli_li;
	ktp_sub[8][6] = ktx_sub_ulli_uli;		ktp_div[8][6] = ktx_div_ulli_uli;
	ktp_lt[8][6] = ktx_lt_ulli_uli;		ktp_gt[8][6] = ktx_gt_ulli_uli;
	ktp_assign[8][6] = ktx_assign_ulli_uli;
	ktp_mod[8][6] = ktx_mod_ulli_uli;
	ktp_sub[8][7] = ktx_sub_ulli_lli;		ktp_div[8][7] = ktx_div_ulli_lli;
	ktp_lt[8][7] = ktx_lt_ulli_lli;		ktp_gt[8][7] = ktx_gt_ulli_lli;
	ktp_assign[8][7] = ktx_assign_ulli_lli;
	ktp_mod[8][7] = ktx_mod_ulli_lli;
	ktp_add[8][8] = ktx_add_ulli_ulli;		ktp_mul[8][8] = ktx_mul_ulli_ulli;
	ktp_eq[8][8] = ktx_eq_ulli_ulli;
	ktp_sub[8][8] = ktx_sub_ulli_ulli;		ktp_div[8][8] = ktx_div_ulli_ulli;
	ktp_lt[8][8] = ktx_lt_ulli_ulli;		ktp_gt[8][8] = ktx_gt_ulli_ulli;
	ktp_assign[8][8] = ktx_assign_ulli_ulli;
	ktp_mod[8][8] = ktx_mod_ulli_ulli;
	ktp_add[8][9] = ktx_add_ulli_f;		ktp_mul[8][9] = ktx_mul_ulli_f;
	ktp_eq[8][9] = ktx_eq_ulli_f;
	ktp_sub[8][9] = ktx_sub_ulli_f;		ktp_div[8][9] = ktx_div_ulli_f;
	ktp_lt[8][9] = ktx_lt_ulli_f;		ktp_gt[8][9] = ktx_gt_ulli_f;
	ktp_assign[8][9] = ktx_assign_ulli_f;
	ktp_add[8][10] = ktx_add_ulli_d;		ktp_mul[8][10] = ktx_mul_ulli_d;
	ktp_eq[8][10] = ktx_eq_ulli_d;
	ktp_sub[8][10] = ktx_sub_ulli_d;		ktp_div[8][10] = ktx_div_ulli_d;
	ktp_lt[8][10] = ktx_lt_ulli_d;		ktp_gt[8][10] = ktx_gt_ulli_d;
	ktp_assign[8][10] = ktx_assign_ulli_d;
	ktp_add[8][11] = ktx_add_ulli_ld;		ktp_mul[8][11] = ktx_mul_ulli_ld;
	ktp_eq[8][11] = ktx_eq_ulli_ld;
	ktp_sub[8][11] = ktx_sub_ulli_ld;		ktp_div[8][11] = ktx_div_ulli_ld;
	ktp_lt[8][11] = ktx_lt_ulli_ld;		ktp_gt[8][11] = ktx_gt_ulli_ld;
	ktp_assign[8][11] = ktx_assign_ulli_ld;
	ktp_sub[9][1] = ktx_sub_f_c;		ktp_div[9][1] = ktx_div_f_c;
	ktp_lt[9][1] = ktx_lt_f_c;		ktp_gt[9][1] = ktx_gt_f_c;
	ktp_assign[9][1] = ktx_assign_f_c;
	ktp_sub[9][2] = ktx_sub_f_uc;		ktp_div[9][2] = ktx_div_f_uc;
	ktp_lt[9][2] = ktx_lt_f_uc;		ktp_gt[9][2] = ktx_gt_f_uc;
	ktp_assign[9][2] = ktx_assign_f_uc;
	ktp_inc[9][3] = ktx_inc_f_i;		ktp_dec[9][3] = ktx_dec_f_i;
	ktp_sqrt[9][3] = ktx_sqrt_f_i;
	ktp_sub[9][3] = ktx_sub_f_i;		ktp_div[9][3] = ktx_div_f_i;
	ktp_lt[9][3] = ktx_lt_f_i;		ktp_gt[9][3] = ktx_gt_f_i;
	ktp_assign[9][3] = ktx_assign_f_i;
	ktp_sub[9][4] = ktx_sub_f_ui;		ktp_div[9][4] = ktx_div_f_ui;
	ktp_lt[9][4] = ktx_lt_f_ui;		ktp_gt[9][4] = ktx_gt_f_ui;
	ktp_assign[9][4] = ktx_assign_f_ui;
	ktp_sub[9][5] = ktx_sub_f_li;		ktp_div[9][5] = ktx_div_f_li;
	ktp_lt[9][5] = ktx_lt_f_li;		ktp_gt[9][5] = ktx_gt_f_li;
	ktp_assign[9][5] = ktx_assign_f_li;
	ktp_sub[9][6] = ktx_sub_f_uli;		ktp_div[9][6] = ktx_div_f_uli;
	ktp_lt[9][6] = ktx_lt_f_uli;		ktp_gt[9][6] = ktx_gt_f_uli;
	ktp_assign[9][6] = ktx_assign_f_uli;
	ktp_sub[9][7] = ktx_sub_f_lli;		ktp_div[9][7] = ktx_div_f_lli;
	ktp_lt[9][7] = ktx_lt_f_lli;		ktp_gt[9][7] = ktx_gt_f_lli;
	ktp_assign[9][7] = ktx_assign_f_lli;
	ktp_sub[9][8] = ktx_sub_f_ulli;		ktp_div[9][8] = ktx_div_f_ulli;
	ktp_lt[9][8] = ktx_lt_f_ulli;		ktp_gt[9][8] = ktx_gt_f_ulli;
	ktp_assign[9][8] = ktx_assign_f_ulli;
	ktp_add[9][9] = ktx_add_f_f;		ktp_mul[9][9] = ktx_mul_f_f;
	ktp_eq[9][9] = ktx_eq_f_f;
	ktp_sub[9][9] = ktx_sub_f_f;		ktp_div[9][9] = ktx_div_f_f;
	ktp_lt[9][9] = ktx_lt_f_f;		ktp_gt[9][9] = ktx_gt_f_f;
	ktp_assign[9][9] = ktx_assign_f_f;
	ktp_add[9][10] = ktx_add_f_d;		ktp_mul[9][10] = ktx_mul_f_d;
	ktp_eq[9][10] = ktx_eq_f_d;
	ktp_sub[9][10] = ktx_sub_f_d;		ktp_div[9][10] = ktx_div_f_d;
	ktp_lt[9][10] = ktx_lt_f_d;		ktp_gt[9][10] = ktx_gt_f_d;
	ktp_assign[9][10] = ktx_assign_f_d;
	ktp_add[9][11] = ktx_add_f_ld;		ktp_mul[9][11] = ktx_mul_f_ld;
	ktp_eq[9][11] = ktx_eq_f_ld;
	ktp_sub[9][11] = ktx_sub_f_ld;		ktp_div[9][11] = ktx_div_f_ld;
	ktp_lt[9][11] = ktx_lt_f_ld;		ktp_gt[9][11] = ktx_gt_f_ld;
	ktp_assign[9][11] = ktx_assign_f_ld;
	ktp_sub[10][1] = ktx_sub_d_c;		ktp_div[10][1] = ktx_div_d_c;
	ktp_lt[10][1] = ktx_lt_d_c;		ktp_gt[10][1] = ktx_gt_d_c;
	ktp_assign[10][1] = ktx_assign_d_c;
	ktp_sub[10][2] = ktx_sub_d_uc;		ktp_div[10][2] = ktx_div_d_uc;
	ktp_lt[10][2] = ktx_lt_d_uc;		ktp_gt[10][2] = ktx_gt_d_uc;
	ktp_assign[10][2] = ktx_assign_d_uc;
	ktp_inc[10][3] = ktx_inc_d_i;		ktp_dec[10][3] = ktx_dec_d_i;
	ktp_sqrt[10][3] = ktx_sqrt_d_i;
	ktp_sub[10][3] = ktx_sub_d_i;		ktp_div[10][3] = ktx_div_d_i;
	ktp_lt[10][3] = ktx_lt_d_i;		ktp_gt[10][3] = ktx_gt_d_i;
	ktp_assign[10][3] = ktx_assign_d_i;
	ktp_sub[10][4] = ktx_sub_d_ui;		ktp_div[10][4] = ktx_div_d_ui;
	ktp_lt[10][4] = ktx_lt_d_ui;		ktp_gt[10][4] = ktx_gt_d_ui;
	ktp_assign[10][4] = ktx_assign_d_ui;
	ktp_sub[10][5] = ktx_sub_d_li;		ktp_div[10][5] = ktx_div_d_li;
	ktp_lt[10][5] = ktx_lt_d_li;		ktp_gt[10][5] = ktx_gt_d_li;
	ktp_assign[10][5] = ktx_assign_d_li;
	ktp_sub[10][6] = ktx_sub_d_uli;		ktp_div[10][6] = ktx_div_d_uli;
	ktp_lt[10][6] = ktx_lt_d_uli;		ktp_gt[10][6] = ktx_gt_d_uli;
	ktp_assign[10][6] = ktx_assign_d_uli;
	ktp_sub[10][7] = ktx_sub_d_lli;		ktp_div[10][7] = ktx_div_d_lli;
	ktp_lt[10][7] = ktx_lt_d_lli;		ktp_gt[10][7] = ktx_gt_d_lli;
	ktp_assign[10][7] = ktx_assign_d_lli;
	ktp_sub[10][8] = ktx_sub_d_ulli;		ktp_div[10][8] = ktx_div_d_ulli;
	ktp_lt[10][8] = ktx_lt_d_ulli;		ktp_gt[10][8] = ktx_gt_d_ulli;
	ktp_assign[10][8] = ktx_assign_d_ulli;
	ktp_sub[10][9] = ktx_sub_d_f;		ktp_div[10][9] = ktx_div_d_f;
	ktp_lt[10][9] = ktx_lt_d_f;		ktp_gt[10][9] = ktx_gt_d_f;
	ktp_assign[10][9] = ktx_assign_d_f;
	ktp_add[10][10] = ktx_add_d_d;		ktp_mul[10][10] = ktx_mul_d_d;
	ktp_eq[10][10] = ktx_eq_d_d;
	ktp_sub[10][10] = ktx_sub_d_d;		ktp_div[10][10] = ktx_div_d_d;
	ktp_lt[10][10] = ktx_lt_d_d;		ktp_gt[10][10] = ktx_gt_d_d;
	ktp_assign[10][10] = ktx_assign_d_d;
	ktp_add[10][11] = ktx_add_d_ld;		ktp_mul[10][11] = ktx_mul_d_ld;
	ktp_eq[10][11] = ktx_eq_d_ld;
	ktp_sub[10][11] = ktx_sub_d_ld;		ktp_div[10][11] = ktx_div_d_ld;
	ktp_lt[10][11] = ktx_lt_d_ld;		ktp_gt[10][11] = ktx_gt_d_ld;
	ktp_assign[10][11] = ktx_assign_d_ld;
	ktp_sub[11][1] = ktx_sub_ld_c;		ktp_div[11][1] = ktx_div_ld_c;
	ktp_lt[11][1] = ktx_lt_ld_c;		ktp_gt[11][1] = ktx_gt_ld_c;
	ktp_assign[11][1] = ktx_assign_ld_c;
	ktp_sub[11][2] = ktx_sub_ld_uc;		ktp_div[11][2] = ktx_div_ld_uc;
	ktp_lt[11][2] = ktx_lt_ld_uc;		ktp_gt[11][2] = ktx_gt_ld_uc;
	ktp_assign[11][2] = ktx_assign_ld_uc;
	ktp_inc[11][3] = ktx_inc_ld_i;		ktp_dec[11][3] = ktx_dec_ld_i;
	ktp_sqrt[11][3] = ktx_sqrt_ld_i;
	ktp_sub[11][3] = ktx_sub_ld_i;		ktp_div[11][3] = ktx_div_ld_i;
	ktp_lt[11][3] = ktx_lt_ld_i;		ktp_gt[11][3] = ktx_gt_ld_i;
	ktp_assign[11][3] = ktx_assign_ld_i;
	ktp_sub[11][4] = ktx_sub_ld_ui;		ktp_div[11][4] = ktx_div_ld_ui;
	ktp_lt[11][4] = ktx_lt_ld_ui;		ktp_gt[11][4] = ktx_gt_ld_ui;
	ktp_assign[11][4] = ktx_assign_ld_ui;
	ktp_sub[11][5] = ktx_sub_ld_li;		ktp_div[11][5] = ktx_div_ld_li;
	ktp_lt[11][5] = ktx_lt_ld_li;		ktp_gt[11][5] = ktx_gt_ld_li;
	ktp_assign[11][5] = ktx_assign_ld_li;
	ktp_sub[11][6] = ktx_sub_ld_uli;		ktp_div[11][6] = ktx_div_ld_uli;
	ktp_lt[11][6] = ktx_lt_ld_uli;		ktp_gt[11][6] = ktx_gt_ld_uli;
	ktp_assign[11][6] = ktx_assign_ld_uli;
	ktp_sub[11][7] = ktx_sub_ld_lli;		ktp_div[11][7] = ktx_div_ld_lli;
	ktp_lt[11][7] = ktx_lt_ld_lli;		ktp_gt[11][7] = ktx_gt_ld_lli;
	ktp_assign[11][7] = ktx_assign_ld_lli;
	ktp_sub[11][8] = ktx_sub_ld_ulli;		ktp_div[11][8] = ktx_div_ld_ulli;
	ktp_lt[11][8] = ktx_lt_ld_ulli;		ktp_gt[11][8] = ktx_gt_ld_ulli;
	ktp_assign[11][8] = ktx_assign_ld_ulli;
	ktp_sub[11][9] = ktx_sub_ld_f;		ktp_div[11][9] = ktx_div_ld_f;
	ktp_lt[11][9] = ktx_lt_ld_f;		ktp_gt[11][9] = ktx_gt_ld_f;
	ktp_assign[11][9] = ktx_assign_ld_f;
	ktp_sub[11][10] = ktx_sub_ld_d;		ktp_div[11][10] = ktx_div_ld_d;
	ktp_lt[11][10] = ktx_lt_ld_d;		ktp_gt[11][10] = ktx_gt_ld_d;
	ktp_assign[11][10] = ktx_assign_ld_d;
	ktp_add[11][11] = ktx_add_ld_ld;		ktp_mul[11][11] = ktx_mul_ld_ld;
	ktp_eq[11][11] = ktx_eq_ld_ld;
	ktp_sub[11][11] = ktx_sub_ld_ld;		ktp_div[11][11] = ktx_div_ld_ld;
	ktp_lt[11][11] = ktx_lt_ld_ld;		ktp_gt[11][11] = ktx_gt_ld_ld;
	ktp_assign[11][11] = ktx_assign_ld_ld;
}
