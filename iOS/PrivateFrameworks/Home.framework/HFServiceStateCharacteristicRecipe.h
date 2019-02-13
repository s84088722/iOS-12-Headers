//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceStateCharacteristicRecipe : NSObject <NAIdentifiable, NSCopying>
{
    _Bool _required;
    NSString *_characteristicType;
    id <HFServiceTreeMatching> _servicePredicate;
}

+ (id)na_identity;
+ (id)recipesForRootServiceCharacteristicTypes:(id)arg1 required:(_Bool)arg2;
+ (id)recipeForRootServiceCharacteristicType:(id)arg1 required:(_Bool)arg2;
@property(readonly, nonatomic, getter=isRequired) _Bool required; // @synthesize required=_required;
@property(readonly, nonatomic) id <HFServiceTreeMatching> servicePredicate; // @synthesize servicePredicate=_servicePredicate;
@property(readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchResultForServices:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacteristicType:(id)arg1 servicePredicate:(id)arg2 required:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

