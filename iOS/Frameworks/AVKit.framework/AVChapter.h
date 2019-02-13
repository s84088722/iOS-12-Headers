//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/NSCopying-Protocol.h>

@class NSString, UIImage;

@interface AVChapter : NSObject <NSCopying>
{
    UIImage *_image;
    CDUnknownBlockType _imageBlock;
    double _startTime;
    double _duration;
    unsigned long long _number;
    NSString *_title;
}

+ (id)chapterAtTime:(double)arg1 inChapters:(id)arg2;
+ (id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(CDUnknownBlockType)arg5;
+ (void)initialize;
@property(readonly) UIImage *image; // @synthesize image=_image;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly) unsigned long long number; // @synthesize number=_number;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(CDUnknownBlockType)arg5;

@end

