//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VCAccessSpecifier : NSObject
{
    _Bool _hasSuggestionReadEntitlement;
    unsigned long long _accessLevel;
    NSString *_associatedAppBundleIdentifier;
    NSString *_processIdentifier;
}

+ (id)accessSpecifierAppropriateForXPCConnection:(id)arg1;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierUnrestrictedWithProcessIdentifier:(int)arg1;
+ (void)initialize;
@property(nonatomic) _Bool hasSuggestionReadEntitlement; // @synthesize hasSuggestionReadEntitlement=_hasSuggestionReadEntitlement;
@property(readonly, copy, nonatomic) NSString *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(readonly, nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
- (void).cxx_destruct;
- (_Bool)allowReadAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (_Bool)allowWriteAccessToSuggestionsWithBundleIdentifier:(id)arg1;
- (_Bool)allowWriteAccessToVoiceShortuctsWithBundleIdentifier:(id)arg1;
- (id)debugDescription;
- (id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2 processIdentifier:(id)arg3;

@end

