/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>

@class PHChangeRequestHelper, PHPhotoLibrary, NSString, NSManagedObjectID;

@interface PHChangeRequest : NSObject <PHInsertChangeRequest> {

	PHChangeRequestHelper* _helper;
	BOOL _shouldPerformConcurrentWork;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                           //@synthesize helper=_helper - In the implementation block
@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;                     //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork;                           //@synthesize shouldPerformConcurrentWork=_shouldPerformConcurrentWork - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(PHChangeRequestHelper *)helper;
-(void)encodeToXPCDict:(id)arg1 ;
-(void)performConcurrentWork;
-(NSString *)managedEntityName;
-(PHPhotoLibrary *)photoLibrary;
-(id)initForNewObject;
-(NSString *)clientName;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(NSManagedObjectID *)objectID;
-(void)didMutate;
-(BOOL)isMutated;
-(id)init;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(NSString *)uuid;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)isNewRequest;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1 ;
-(BOOL)isClientEntitled;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldPerformConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1 ;
-(long long)accessScopeOptionsRequirement;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
@end

