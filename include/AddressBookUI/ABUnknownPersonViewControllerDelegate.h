//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#pragma once

#import <Foundation/NSObjCRuntime.h>
#import <AddressBookUI/AddressBookUIExport.h>
#import <AddressBook/ABRecord.h>
#import <AddressBook/ABMultiValue.h>

@class ABUnknownPersonViewController;

@protocol ABUnknownPersonViewControllerDelegate
@required
- (void)unknownPersonViewController:(ABUnknownPersonViewController*)unknownPersonView didResolveToPerson:(ABRecordRef)person;

@optional
- (BOOL)unknownPersonViewController:(ABUnknownPersonViewController*)unknownPersonViewController
shouldPerformDefaultActionForPerson:(ABRecordRef)person
                           property:(ABPropertyID)property
                         identifier:(ABMultiValueIdentifier)identifier;

@end
