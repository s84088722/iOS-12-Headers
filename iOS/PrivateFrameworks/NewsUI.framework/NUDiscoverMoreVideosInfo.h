//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>
#import <NewsUI/SVDiscoverMoreConfigurationProviding-Protocol.h>

@class NSString, NTPBDiscoverMoreVideosInfo;

@interface NUDiscoverMoreVideosInfo : NSObject <NSCopying, SVDiscoverMoreConfigurationProviding>
{
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
}

@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *actionURLString;
- (id)initWithDiscoverMoreVideosInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

