//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteEntityForeignKey : NSObject
{
    Class _entityClass;
    NSString *_property;
    long long _deletionAction;
}

@property(readonly, nonatomic) long long deletionAction; // @synthesize deletionAction=_deletionAction;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (void).cxx_destruct;
- (id)creationSQL;
- (id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3;

@end

