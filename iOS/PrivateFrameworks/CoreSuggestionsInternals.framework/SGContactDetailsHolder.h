//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGContactDetailsHolder : NSObject
{
    NSArray *_emailAddresses;
    NSArray *_postalAddresses;
    NSArray *_phoneNumbers;
    NSArray *_instantMessageAddresses;
    NSArray *_socialProfiles;
}

@property(retain, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(retain, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(retain, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void).cxx_destruct;

@end

