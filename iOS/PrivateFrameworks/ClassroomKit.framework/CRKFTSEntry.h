//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKFTSEntry : NSObject
{
    NSString *_path;
    struct stat _stat;
}

@property(readonly, nonatomic) struct stat stat; // @synthesize stat=_stat;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)errorForFTSEntry:(struct _ftsent *)arg1;
- (id)initWithFTSEntry:(struct _ftsent *)arg1 error:(id *)arg2;

@end

