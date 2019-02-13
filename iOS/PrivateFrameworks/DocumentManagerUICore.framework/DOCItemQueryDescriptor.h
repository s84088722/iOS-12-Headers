//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchQuery, NSFileProviderEnumerationProperties;

@interface DOCItemQueryDescriptor : NSObject
{
    CSSearchQuery *_searchQuery;
    NSFileProviderEnumerationProperties *_properties;
}

@property(readonly, nonatomic) NSFileProviderEnumerationProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (_Bool)requiresFastUpdates;
- (_Bool)isEqualToItemQueryDescriptor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)augmentQueryContext:(id)arg1;
- (unsigned long long)maxCount;
- (id)additionalAttributes;
- (_Bool)itemIsSufficient:(id)arg1;
- (double)coalescenceTime;
- (id)queryString;
@property(readonly) CSSearchQuery *searchQuery;
- (void)flushQuery;
- (id)initWithProperties:(id)arg1;

@end

