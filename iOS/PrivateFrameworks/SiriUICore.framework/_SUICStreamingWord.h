//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, UIImage;

@interface _SUICStreamingWord : NSObject
{
    _SUICStreamingWord *_previous;
    long long _insertType;
    double _glyphLocationInWordX;
    CALayer *_wordLayer;
    UIImage *_beginImage;
    UIImage *_endImage;
    struct _NSRange _textRange;
}

@property(retain, nonatomic) UIImage *endImage; // @synthesize endImage=_endImage;
@property(retain, nonatomic) UIImage *beginImage; // @synthesize beginImage=_beginImage;
@property(retain, nonatomic) CALayer *wordLayer; // @synthesize wordLayer=_wordLayer;
@property(nonatomic) double glyphLocationInWordX; // @synthesize glyphLocationInWordX=_glyphLocationInWordX;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(nonatomic) long long insertType; // @synthesize insertType=_insertType;
@property(retain, nonatomic) _SUICStreamingWord *previous; // @synthesize previous=_previous;
- (void).cxx_destruct;
- (id)init;

@end

