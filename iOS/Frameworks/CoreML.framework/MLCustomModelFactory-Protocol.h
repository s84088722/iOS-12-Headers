//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MLModelDescription, NSDictionary, NSObject, NSString;
@protocol MLCustomModel;

@protocol MLCustomModelFactory
- (NSObject<MLCustomModel> *)customModelWithName:(NSString *)arg1 modelDescription:(MLModelDescription *)arg2 parameterDictionary:(NSDictionary *)arg3 error:(id *)arg4;
@end
