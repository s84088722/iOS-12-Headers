//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXWebThreadPreparer : NSObject
{
    _Bool _preparedThisRunLoop;
    _Bool _preparedAnswer;
}

+ (id)sharedPreparer;
@property(nonatomic) _Bool preparedAnswer; // @synthesize preparedAnswer=_preparedAnswer;
@property(nonatomic) _Bool preparedThisRunLoop; // @synthesize preparedThisRunLoop=_preparedThisRunLoop;
- (id)init;

@end

