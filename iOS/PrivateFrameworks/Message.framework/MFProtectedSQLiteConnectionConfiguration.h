//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFSQLiteConnectionConfiguration.h>

@class NSString;

@interface MFProtectedSQLiteConnectionConfiguration : MFSQLiteConnectionConfiguration
{
    NSString *_protectedDatabaseName;
}

@property(copy, nonatomic) NSString *protectedDatabaseName; // @synthesize protectedDatabaseName=_protectedDatabaseName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) const char *protectedDatabaseFileSystemPath;
@property(readonly, nonatomic) NSString *protectedDatabasePath;

@end

