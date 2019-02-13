//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class IMBalloonPluginDataSource, NSString, UIImageView, UIView;

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell
{
    NSString *_balloonBundleID;
    IMBalloonPluginDataSource *_dataSource;
    UIView *_previousPluginSnapshot;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *previousPluginSnapshot; // @synthesize previousPluginSnapshot=_previousPluginSnapshot;
@property(retain, nonatomic) IMBalloonPluginDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *balloonBundleID; // @synthesize balloonBundleID=_balloonBundleID;
- (void).cxx_destruct;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)prepareForReuse;
- (void)_updateBalloonPluginIconImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1;

@end

