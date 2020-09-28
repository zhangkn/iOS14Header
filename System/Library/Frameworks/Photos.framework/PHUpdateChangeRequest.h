/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHUpdateChangeRequest <PHChangeRequest>
@property (getter=isMutated,readonly) BOOL mutated; 
@required
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
-(BOOL)isMutated;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;

@end
