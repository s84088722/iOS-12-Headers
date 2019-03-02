//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteMigrationStep : NSObject
{
    CDUnknownBlockType _migrationHandler;
    long long _finalSchemaVersion;
    long long _foreignKeyStatus;
    NSString *_schemaName;
    long long _requiredPrimarySchemaVersion;
}

+ (id)migrationStepWithForeignKeysDisabledFrom:(long long)arg1 to:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)migrationStepFrom:(long long)arg1 to:(long long)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long requiredPrimarySchemaVersion; // @synthesize requiredPrimarySchemaVersion=_requiredPrimarySchemaVersion;
@property(readonly, copy, nonatomic) NSString *schemaName; // @synthesize schemaName=_schemaName;
@property(nonatomic) long long foreignKeyStatus; // @synthesize foreignKeyStatus=_foreignKeyStatus;
@property(readonly, nonatomic) long long finalSchemaVersion; // @synthesize finalSchemaVersion=_finalSchemaVersion;
@property(readonly, copy, nonatomic) CDUnknownBlockType migrationHandler; // @synthesize migrationHandler=_migrationHandler;
- (void).cxx_destruct;
- (id)description;
- (id)initForSchema:(id)arg1 toVersion:(long long)arg2 requiringVersion:(long long)arg3 foreignKeys:(long long)arg4 handler:(CDUnknownBlockType)arg5;

@end
