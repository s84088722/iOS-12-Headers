//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIViewLFLDChangeRecord.h>

@class NSString, NSValue, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewLFLDGeometryChangeRecord : _UIViewLFLDChangeRecord
{
    NSString *_geometricPropertyName;
    NSValue *_geometricPropertyValue;
    UIView *_currentLayoutView;
    NSString *_currentLayoutMethodName;
}

@property(readonly, nonatomic) NSString *currentLayoutMethodName; // @synthesize currentLayoutMethodName=_currentLayoutMethodName;
@property(readonly, nonatomic) UIView *currentLayoutView; // @synthesize currentLayoutView=_currentLayoutView;
@property(readonly, nonatomic) NSValue *geometricPropertyValue; // @synthesize geometricPropertyValue=_geometricPropertyValue;
@property(readonly, nonatomic) NSString *geometricPropertyName; // @synthesize geometricPropertyName=_geometricPropertyName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGeometricPropertyName:(id)arg1 value:(id)arg2 currentLayoutView:(id)arg3 methodName:(id)arg4;

@end

