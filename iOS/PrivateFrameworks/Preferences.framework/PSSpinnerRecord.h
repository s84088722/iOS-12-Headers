//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UINavigationItem;

@interface PSSpinnerRecord : NSObject
{
    _Bool _hidesBackButton;
    NSArray *_rightItems;
    NSArray *_leftItems;
    UINavigationItem *_navigationItem;
}

@property(nonatomic) _Bool hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(copy, nonatomic) NSArray *leftItems; // @synthesize leftItems=_leftItems;
@property(copy, nonatomic) NSArray *rightItems; // @synthesize rightItems=_rightItems;
- (void).cxx_destruct;

@end

