/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVContext;

@interface VCPFaceMerger : NSObject {

	PVContext* _context;

}
+(BOOL)_allowANE;
-(id)_faceObservationsWithBBoxFromPVFaces:(id)arg1 mapping:(id)arg2 ;
-(void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(BOOL)_alignBBoxForPVFaces:(id)arg1 forImage:(id)arg2 ;
-(id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2 ;
-(id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id*)arg3 ;
-(id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3 ;
-(id)initWithContext:(id)arg1 ;
@end

