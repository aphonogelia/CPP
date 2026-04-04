/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htharrau <htharrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:05:10 by htharrau          #+#    #+#             */
/*   Updated: 2026/04/04 17:39:01 by htharrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>
class PmergeMe {

private:
    std::vector<int> _dataVect;
    std::deque<int>  _dataDeq;
    std::vector<int> _sortedVect;
    std::deque<int>  _sortedDeq;
    size_t           _n;
    size_t           _nCompV;
    size_t           _nCompD;
    std::vector<int> _expJacob;

    std::vector<int> sortAlgoV(std::vector<int> toSlice);
    std::deque<int>  sortAlgoD(std::deque<int> toSlice);
    std::vector<int> calcJacobsthal() const;

    void binaryInsertV(std::vector<int>& sorted, size_t upperBound, int toInsert);
    void binaryInsertD(std::deque<int>& sorted, size_t upperBound, int toInsert);

    void printVect(const std::vector<int>& vec, const std::string& label);
    void printDeq(const std::deque<int>& deq, const std::string& label);
    void printPairs(const std::vector<std::pair<int, int> >& pairs) const;

    bool isSorted(const std::vector<int>& vec) const;
    bool isSorted(const std::deque<int>& deq) const;

    void verif(const std::vector<int>& sorted, const std::vector<int>& original);
    void verif(const std::deque<int>& sorted, const std::deque<int>& original);

public:
    PmergeMe(const std::vector<int>& dataV, const std::deque<int>& dataD);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();
};