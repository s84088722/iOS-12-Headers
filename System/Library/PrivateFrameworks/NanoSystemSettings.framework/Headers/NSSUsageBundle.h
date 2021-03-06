//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoSystemSettings/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NSSUsageBundle : NSObject <NSSecureCoding>
{
    _Bool _purgeable;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
    unsigned long long _totalSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic, getter=isPurgeable) _Bool purgeable; // @synthesize purgeable=_purgeable;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

