//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileAsset/MADownloadOptions.h>

@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions
{
    _Bool _supervised;
    NSString *_requestedProductVersion;
    long long _delayPeriod;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supervised; // @synthesize supervised=_supervised;
@property(nonatomic) long long delayPeriod; // @synthesize delayPeriod=_delayPeriod;
@property(retain, nonatomic) NSString *requestedProductVersion; // @synthesize requestedProductVersion=_requestedProductVersion;
- (void)logOptions;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

