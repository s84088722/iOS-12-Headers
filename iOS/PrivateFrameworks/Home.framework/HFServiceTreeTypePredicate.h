//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFServiceTreeMatching-Protocol.h>

@class NSSet, NSString;

@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching>
{
    _Bool _includeChildServices;
    NSSet *_serviceTypes;
    NSSet *_serviceSubtypes;
}

+ (id)na_identity;
+ (id)predicateWithServiceType:(id)arg1 includeChildServices:(_Bool)arg2;
+ (id)predicateWithServiceType:(id)arg1;
+ (id)anyServiceTypePredicateIncludingChildServices;
+ (id)anyServiceTypePredicate;
@property(readonly, nonatomic) _Bool includeChildServices; // @synthesize includeChildServices=_includeChildServices;
@property(readonly, copy, nonatomic) NSSet *serviceSubtypes; // @synthesize serviceSubtypes=_serviceSubtypes;
@property(readonly, copy, nonatomic) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchingServicesForRootService:(id)arg1;
- (_Bool)_matchesService:(id)arg1;
- (id)initWithServiceTypes:(id)arg1 serviceSubtypes:(id)arg2 includeChildServices:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

