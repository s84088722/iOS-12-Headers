//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassroomKit/CATOperation.h>

@class LKUser;

@interface LUIFetchUserImageOperation : CATOperation
{
    LKUser *_user;
    unsigned long long _imageType;
}

@property(nonatomic) unsigned long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) LKUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)fetchImage;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithUser:(id)arg1 imageType:(unsigned long long)arg2;

@end

