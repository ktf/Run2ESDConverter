// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.
#ifndef o2_framework_run2_Run3AODConverter_H_INCLUDED
#define o2_framework_run2_Run3AODConverter_H_INCLUDED

#include <memory>

class TTree;

namespace arrow {
namespace io {
class OutputStream;
}
} // namespace arrow

namespace o2::framework::run2 {

/// Helpers for the Run2 ESD to Run3 AOD conversion.
struct Run3AODConverter {
  // Helper to return a callback which is able to conver a Run2 ESD file to an
  // Arrow Table which then gets streamed to an ostream.
  static void convert(TTree *tESD, std::shared_ptr<arrow::io::OutputStream> s,
                      size_t nEvents);
};

} // namespace o2::framework::run2

#endif // o2_framework_run2_Run3AODConverter_H_INCLUDED
