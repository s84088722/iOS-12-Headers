//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSFormAutoFillClassificationToCorrectionsTransformer;
@protocol WBSFormAutoFillCorrectionManagerDelegate;

@interface WBSFormAutoFillCorrectionManager : NSObject
{
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    id <WBSFormAutoFillCorrectionManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSFormAutoFillCorrectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_correctionsStore;
- (id)_feedbackProcessor;
- (void)setCorrectionSet:(id)arg1;
- (void)_setCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3;
- (void)getCorrectionsForFormFieldFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
