//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NaturalLanguage/NLModelImpl.h>

@class MLModel, NLModelConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplML : NLModelImpl
{
    MLModel *_mlModel;
    NLModelConfiguration *_configuration;
    NSString *_inputName;
    NSString *_outputName;
}

- (void).cxx_destruct;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)configuration;
- (id)modelData;
- (id)initWithMLModel:(id)arg1 configuration:(id)arg2;
- (id)initWithModelTrainer:(id)arg1;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;

@end

