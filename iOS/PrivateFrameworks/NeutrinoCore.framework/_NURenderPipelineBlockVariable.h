//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderPipelineFunction.h>

@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction
{
    CDUnknownBlockType _evaluationBlock;
}

- (void).cxx_destruct;
- (_Bool)isEqualToBlockVariable:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)description;
- (id)initWithEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

