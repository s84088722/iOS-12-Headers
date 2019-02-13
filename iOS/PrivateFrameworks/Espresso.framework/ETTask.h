//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ETImageDescriptorExtractor, ETModelDef, ETOptimizerDef;

@interface ETTask : NSObject
{
    _Bool _dumpData;
    ETModelDef *_model;
    ETOptimizerDef *_optimizer;
    ETImageDescriptorExtractor *_extractor;
}

@property(nonatomic) _Bool dumpData; // @synthesize dumpData=_dumpData;
@property(nonatomic) ETImageDescriptorExtractor *extractor; // @synthesize extractor=_extractor;
@property(nonatomic) ETOptimizerDef *optimizer; // @synthesize optimizer=_optimizer;
@property(nonatomic) ETModelDef *model; // @synthesize model=_model;
- (void)saveNetwork:(id)arg1;
- (id)evaluate:(id)arg1;
- (float)fit:(id)arg1 numberOfBatches:(unsigned int)arg2 withProgress:(CDUnknownBlockType)arg3;
- (float)fit:(id)arg1 numberOfEpochs:(int)arg2 withProgress:(CDUnknownBlockType)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (id)init;

@end

