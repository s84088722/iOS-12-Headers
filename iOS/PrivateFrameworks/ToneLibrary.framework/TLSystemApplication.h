//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TLSystemApplication : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_name;
}

+ (id)defaultSystemApplication;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2;

@end

