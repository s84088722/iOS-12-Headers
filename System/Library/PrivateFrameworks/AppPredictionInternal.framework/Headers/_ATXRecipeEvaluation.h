/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface _ATXRecipeEvaluation : NSObject
+(double)kendallTauFirstItems:(SCD_Struct_AT39*)arg1 secondItems:(SCD_Struct_AT39*)arg2 count:(unsigned long long)arg3 ;
+(unsigned long long)rankOfScore:(double)arg1 inputItems:(SCD_Struct_AT39*)arg2 count:(unsigned long long)arg3 ;
+(id)inputScoresFromItem:(SCD_Struct_AT39*)arg1 ;
+(id)evaluateRecipe:(id)arg1 recordData:(id)arg2 ;
+(id)evaluateRecipe:(id)arg1 recordInfo:(id)arg2 recordData:(id)arg3 attachments:(id)arg4 errorDomain:(id)arg5 error:(id*)arg6 ;
@end
