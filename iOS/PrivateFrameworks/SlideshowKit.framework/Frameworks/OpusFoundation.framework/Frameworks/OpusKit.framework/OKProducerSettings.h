//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject
{
    NSArray *_guidelines;
    OKMediaFeeder *_mediaFeeder;
    NSArray *_audioURLs;
    OKProducerPreset *_preset;
}

@property(retain) OKMediaFeeder *mediaFeeder; // @synthesize mediaFeeder=_mediaFeeder;
@property(retain) NSArray *guidelines; // @synthesize guidelines=_guidelines;
@property(retain) OKProducerPreset *preset; // @synthesize preset=_preset;
- (void)dealloc;
@property(retain) NSArray *audioURLs;

@end

