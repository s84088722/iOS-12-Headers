//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQLink, NSDictionary, NSString;

@interface _ICQButtonSpecification : NSObject
{
    NSDictionary *_serverDict;
    ICQLink *_buttonLink;
    NSString *_buttonFormat;
    NSDictionary *_linkForBundleIdentifier;
}

+ (id)buttonSpecificationSampleForLevel:(long long)arg1;
@property(retain, nonatomic) NSDictionary *linkForBundleIdentifier; // @synthesize linkForBundleIdentifier=_linkForBundleIdentifier;
@property(readonly, nonatomic) NSString *buttonFormat; // @synthesize buttonFormat=_buttonFormat;
- (void).cxx_destruct;
- (id)linkForBundleIdentifier:(id)arg1;
@property(readonly, nonatomic) ICQLink *buttonLink;
- (id)initWithServerDictionary:(id)arg1;

@end

