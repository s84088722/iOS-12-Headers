//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FMFMapCacheImage : NSObject <NSSecureCoding>
{
    long long _count;
    NSString *_path;
    NSDate *_timestamp;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)boostPriority;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

