//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKInkProperties : NSObject
{
}

+ (id)arrayForBezierControlPoints:(CDStruct_d2b197d1)arg1;
+ (_Bool)bezierControlPoints:(CDStruct_d2b197d1)arg1 isEqual:(CDStruct_d2b197d1)arg2;
+ (unsigned long long)functionTypeForBezierControlPoints:(CDStruct_d2b197d1)arg1;
+ (CDStruct_d2b197d1)controlPointsForFunctionType:(unsigned long long)arg1;
+ (unsigned long long)functionTypeForName:(id)arg1;
+ (id)functionNames;
+ (id)inputNames;
+ (id)inputMaskNames;
+ (id)inkPropertyNames;
+ (id)inkTypeNames;
+ (id)blendModeNames;
+ (double)defaultValueForInput:(unsigned long long)arg1;
+ (CDStruct_c3b9c2ee)rangeForInput:(unsigned long long)arg1;
+ (CDStruct_c3b9c2ee)rangeForInkProperty:(unsigned long long)arg1;

@end

