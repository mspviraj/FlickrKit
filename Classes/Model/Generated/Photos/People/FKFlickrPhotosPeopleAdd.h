//
//  FKFlickrPhotosPeopleAdd.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosPeopleAddError_PersonNotFound = 1,		 /* The NSID passed was not a valid user id. */
	FKFlickrPhotosPeopleAddError_PhotoNotFound = 2,		 /* The photo id passed was not a valid photo id. */
	FKFlickrPhotosPeopleAddError_UserCannotAddThisPersonToPhotos = 3,		 /* The person being added to the photo does not allow the calling user to add them. */
	FKFlickrPhotosPeopleAddError_UserCannotAddPeopleToThatPhoto = 4,		 /* The owner of the photo doesn't allow the calling user to add people to their photos. */
	FKFlickrPhotosPeopleAddError_PersonCantBeTaggedInThatPhoto = 5,		 /* The person being added to the photo does not want to be identified in this photo. */
	FKFlickrPhotosPeopleAddError_SomeCoordinateParamtersWereBlank = 6,		 /* Not all of the co-ordinate parameters (person_x, person_y, person_w, person_h) were passed with valid values. */
	FKFlickrPhotosPeopleAddError_CantAddThatPersonToANonpublicPhoto = 7,		 /* You can only add yourself to another member's non-public photos. */
	FKFlickrPhotosPeopleAddError_TooManyPeopleInThatPhoto = 8,		 /* The maximum number of people has already been added to the photo. */
	FKFlickrPhotosPeopleAddError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosPeopleAddError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosPeopleAddError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosPeopleAddError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosPeopleAddError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosPeopleAddError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosPeopleAddError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosPeopleAddError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosPeopleAddError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosPeopleAddError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosPeopleAddError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosPeopleAddError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosPeopleAddError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosPeopleAddError;

/*

Add a person to a photo. Coordinates and sizes of boxes are optional; they are measured in pixels, based on the 500px image size shown on individual photo pages.




*/
@interface FKFlickrPhotosPeopleAdd : NSObject <FKFlickrAPIMethod>

/* The id of the photo to add a person to. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */

/* The NSID of the user to add to the photo. */
@property (nonatomic, copy) NSString *user_id; /* (Required) */

/* The left-most pixel co-ordinate of the box around the person. */
@property (nonatomic, copy) NSString *person_x;

/* The top-most pixel co-ordinate of the box around the person. */
@property (nonatomic, copy) NSString *person_y;

/* The width (in pixels) of the box around the person. */
@property (nonatomic, copy) NSString *person_w;

/* The height (in pixels) of the box around the person. */
@property (nonatomic, copy) NSString *person_h;


@end
