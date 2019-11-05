/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPTPAssetReader.h>

@class PHMediaFormatConversionDestination;

@interface PLPTPConversionDestinationAssetReader : PLPTPAssetReader {

	PHMediaFormatConversionDestination* _destination;

}

@property (retain) PHMediaFormatConversionDestination * destination;              //@synthesize destination=_destination - In the implementation block
-(id)path;
-(void)setDestination:(PHMediaFormatConversionDestination *)arg1 ;
-(PHMediaFormatConversionDestination *)destination;
-(id)initWithDestination:(id)arg1 ;
-(id)dataSourcePathForDataRange:(NSRange)arg1 error:(id*)arg2 ;
@end
