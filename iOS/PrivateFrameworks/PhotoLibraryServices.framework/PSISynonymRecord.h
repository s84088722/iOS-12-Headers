//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSISynonymRecord : NSObject
{
    short _category;
    NSString *_synonym;
}

@property(nonatomic) short category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *synonym; // @synthesize synonym=_synonym;
- (void)dealloc;
- (id)initWithSynonym:(id)arg1 category:(short)arg2;

@end
