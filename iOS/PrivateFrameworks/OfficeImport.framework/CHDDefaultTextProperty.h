//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class EDResources, EDRunsCollection, NSString;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : NSObject <EDKeyedObject>
{
    EDResources *mResources;
    int mDefaultTextType;
    unsigned long long mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    _Bool mShowCategoryLabel;
    _Bool mShowValueLabel;
    _Bool mShowPercentageLabel;
    _Bool mShowSeriesLabel;
    _Bool mShowBubbleSizeLabel;
}

+ (id)defaultTextPropertyWithResources:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setIsShowSeriesLabel:(_Bool)arg1;
- (_Bool)isShowSeriesLabel;
- (void)setIsShowBubbleSizeLabel:(_Bool)arg1;
- (_Bool)isShowBubbleSizeLabel;
- (void)setIsShowPercentageLabel:(_Bool)arg1;
- (_Bool)isShowPercentageLabel;
- (void)setIsShowValueLabel:(_Bool)arg1;
- (_Bool)isShowValueLabel;
- (void)setIsShowCategoryLabel:(_Bool)arg1;
- (_Bool)isShowCategoryLabel;
- (void)setLabelPosition:(int)arg1;
- (int)labelPosition;
- (long long)key;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (void)setRuns:(id)arg1;
- (id)runs;
- (void)setDefaultTextType:(int)arg1;
- (int)defaultTextType;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

