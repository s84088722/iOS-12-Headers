//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface HDSQLiteDatabaseTableSchema : NSObject
{
    NSString *_name;
    NSDictionary *_columns;
    NSSet *_indices;
}

@property(retain, nonatomic) NSSet *indices; // @synthesize indices=_indices;
@property(retain, nonatomic) NSDictionary *columns; // @synthesize columns=_columns;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

