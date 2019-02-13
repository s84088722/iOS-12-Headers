//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDomainsPayload : MCPayload
{
    NSDictionary *_restrictions;
}

+ (_Bool)isPatternValid:(id)arg1 outError:(id *)arg2;
+ (id)invalidDomainPatternErrorWithPattern:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
- (void).cxx_destruct;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

