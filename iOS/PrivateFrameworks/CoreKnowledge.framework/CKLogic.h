//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKLogic : NSObject
{
    // Error parsing type: , name: body
    // Error parsing type: , name: negatedBody
}

+ (id)ifNotExistsLink:(id)arg1 to:(id)arg2;
+ (id)ifExistsLink:(id)arg1 to:(id)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)and:(id)arg1;
- (id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (id)andExistsLink:(id)arg1 to:(id)arg2 error:(id *)arg3;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) long long hash;

@end

