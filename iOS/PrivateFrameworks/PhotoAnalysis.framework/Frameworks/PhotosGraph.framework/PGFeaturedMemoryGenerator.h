//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator
{
    _Bool _usesLowRequirements;
    _Bool _oldMemory;
    NSDate *_upperBoundLocalDate;
}

@property(nonatomic) _Bool oldMemory; // @synthesize oldMemory=_oldMemory;
@property(nonatomic) _Bool usesLowRequirements; // @synthesize usesLowRequirements=_usesLowRequirements;
@property(retain, nonatomic) NSDate *upperBoundLocalDate; // @synthesize upperBoundLocalDate=_upperBoundLocalDate;
- (void).cxx_destruct;

@end

