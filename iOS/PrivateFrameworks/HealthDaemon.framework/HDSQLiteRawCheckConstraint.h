//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteCheckConstraint.h>

@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint
{
    NSString *__rawSQL;
}

+ (id)checkConstraintWithSQL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *_rawSQL; // @synthesize _rawSQL=__rawSQL;
- (void).cxx_destruct;
- (id)SQLCheckConstraint;
- (id)_initWithSQL:(id)arg1;

@end

