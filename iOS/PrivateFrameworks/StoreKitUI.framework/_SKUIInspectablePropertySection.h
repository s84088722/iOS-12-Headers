//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface _SKUIInspectablePropertySection : NSObject
{
    NSString *_friendlyName;
    NSMutableArray *_properties;
}

@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
- (void).cxx_destruct;
- (id)init;

@end

