//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class KNSlideNode;

__attribute__((visibility("hidden")))
@interface KNSlideNodeBlockOperation : NSBlockOperation
{
    KNSlideNode *_slideNode;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
- (void).cxx_destruct;
- (id)initWithSlideNode:(id)arg1 type:(long long)arg2;

@end

