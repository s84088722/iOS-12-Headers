//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactsEnvironment, CNiOSPersonFetchRequest;

__attribute__((visibility("hidden")))
@interface CNiOSPersonFetcher : NSObject
{
    CNiOSPersonFetchRequest *_fetchRequest;
    void *_addressBook;
    CNContactsEnvironment *_environment;
}

+ (id)peopleForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly, nonatomic) CNiOSPersonFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void).cxx_destruct;
- (id)sortPeople:(id)arg1;
- (_Bool)shouldSortInMemory;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)fetchPeopleReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3;

@end

