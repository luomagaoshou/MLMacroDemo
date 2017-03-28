//
//  MLCSSMacro.h
//  MLCSSMacro
//
//  Created by 妙龙赖 on 2017/3/27.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#ifndef MLCSSMacro_h
#define MLCSSMacro_h


#define ml_css(OBJ, ...) ml_css_(OBJ, __VA_ARGS__)

#define ml_css_(OBJ, ...) metamacro_concat(ml_css_, metamacro_argcount(__VA_ARGS__))(0, OBJ, __VA_ARGS__)

#define ml_css_0(INDEX, OBJ, ...)

#define ml_css_1(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_0(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_2(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_1(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_3(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_2(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_4(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_3(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_5(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_4(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_6(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_5(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_7(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_6(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_8(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_7(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_9(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_8(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_10(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_9(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_11(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_10(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_12(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_11(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_13(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_12(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_14(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_13(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_15(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_14(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_16(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_15(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_17(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_16(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_18(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_17(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_19(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_18(metamacro_inc(INDEX), OBJ, __VA_ARGS__)

#define ml_css_20(INDEX, OBJ, ...) OBJ.metamacro_at(INDEX, __VA_ARGS__);\
ml_css_19(metamacro_inc(INDEX), OBJ, __VA_ARGS__)




#endif /* MLCSSMacro_h */
